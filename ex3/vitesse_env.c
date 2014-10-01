#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <time.h>
#include <signal.h>
#include <string.h>
#include <semaphore.h>

sem_t sem;
sem_t mutex_signal;


void signalhandler(int sig) {

    if (sig == SIGALRM) {
        // release mutex
        sem_post(&sem);
    }
    else {
        printf("Handler called with signal number %d\n",sig);
    }
}

void * thread_second() {

    for(;;) {
        sem_wait(&sem);
        sem_wait(&mutex_signal);
        SPEED_I_Second();
        sem_post(&mutex_signal);
    }
}

void * thread_timer() {
	
    struct itimerspec value;
    timer_t timer_id;
    struct sigaction act;
 
	memset (&act, '\0', sizeof(act));
    act.sa_handler = signalhandler;
    sigemptyset (&act.sa_mask);
    act.sa_flags = 0;

    value.it_value.tv_sec = 1;
    value.it_value.tv_nsec = 0;

    value.it_interval.tv_sec = 1;
    value.it_interval.tv_nsec = 0;

    timer_create (CLOCK_REALTIME, NULL, &timer_id);

    if(timer_settime(timer_id,0,&value,NULL)==-1) {
        perror("settimer failed");
        exit(1);
    }

    sigaction (SIGALRM, &act, NULL);
}

static void AnalyseInput();
static void TheEnd();
static void PrintOut();

main() {

	pthread_t tid;
    pthread_t t_sec;
    int err;

    system("stty raw -echo");

    sem_init(&sem, 0, 0);
    sem_init(&mutex_signal, 0, 1);

    err = pthread_create(&(tid), NULL, &thread_timer, NULL);
    
	if (err != 0)
    	printf("can't create thread :[%s]", strerror(err));
    else
        printf("timeer Thread created successfully\n");

     err = pthread_create(&(t_sec), NULL, &thread_second, NULL);
    
	if (err != 0)
    	printf("can't create thread :[%s]", strerror(err));
    else
        printf("timeer Thread created successfully\n");

	for (;;) {
      AnalyseInput();
      SPEED();
    }
}


void AnalyseInput() {

  switch (getchar()) {
    case 'c': sem_wait(&mutex_signal); SPEED_I_Centimeter(); sem_post(&mutex_signal); break;
    case 'q': TheEnd(); break;
}
}


void SPEED_O_Speed(int distance) 
{
    printf("SPEED %d!!!!!!!!!!!!!!", distance);
    PrintOut("\r\n");
}


void TheEnd() {
    PrintOut("Bye...\r\n");
    system("stty -raw echo");
    exit(0);
}


void PrintOut(char *ch)
{
    printf("%s", ch);
    fflush(stdout);
}
