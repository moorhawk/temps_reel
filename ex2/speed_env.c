#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

static void AnalyseInput();
static void TheEnd();
static void PrintOut();

main() {
    system("stty raw -echo");
    for (;;) {
      AnalyseInput();
      SPEED();
    }
}


void AnalyseInput() {

  switch (getchar()) {
    case 'c': SPEED_I_Centimeter(); break;
    case 's': SPEED_I_Second(); break;      
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
