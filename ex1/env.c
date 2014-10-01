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
      COUNT();
    }
}


void AnalyseInput() {

  switch (getchar()) {
    case 'i': COUNT_I_I(); break;      
    case 'q': TheEnd(); break;
    case 'r': COUNT_I_R();
}
}


void COUNT_O_COUNT(int count) 
{
    printf("count %d", count);
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
