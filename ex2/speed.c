/* sscc : C CODE OF SORTED EQUATIONS SPEED - INLINE MODE */

/* AUXILIARY DECLARATIONS */

#ifndef STRLEN
#define STRLEN 81
#endif
#define _COND(A,B,C) ((A)?(B):(C))
#ifdef TRACE_ACTION
#include <stdio.h>
#endif
#ifndef NULL
#define NULL ((char*)0)
#endif

#ifndef __EXEC_STATUS_H_LOADED
#define __EXEC_STATUS_H_LOADED

typedef struct {
unsigned int start:1;
unsigned int kill:1;
unsigned int active:1;
unsigned int suspended:1;
unsigned int prev_active:1;
unsigned int prev_suspended:1;
unsigned int exec_index;
unsigned int task_exec_index;
void (*pStart)();
int (*pRet)();
} __ExecStatus;

#endif
#define __ResetExecStatus(status) {\
   status.prev_active = status.active; \
   status.prev_suspended = status.suspended; \
   status.start = status.kill = status.active = status.suspended = 0; }
#define __DSZ(V) (--(V)<=0)
#define BASIC_TYPES_DEFINED
typedef int boolean;
typedef int integer;
typedef char* string;
#define _true 1
#define _false 0
#define __SPEED_GENERIC_TEST(TEST) return TEST;
typedef void (*__SPEED_APF)();
extern __SPEED_APF *__SPEED_PActionArray;
extern (*__SPEED_scf[])();
extern (*__SPEED_dcf[])();

                   
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __SPEED_V0;
static boolean __SPEED_V1;
static integer __SPEED_V2;
static integer __SPEED_V3;


/* INPUT FUNCTIONS */

void SPEED_I_Centimeter () {
__SPEED_V0 = _true;
}
void SPEED_I_Second () {
__SPEED_V1 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __SPEED_A1 \
__SPEED_V0
#define __SPEED_A2 \
__SPEED_V1

/* OUTPUT ACTIONS */

#define __SPEED_A3 \
SPEED_O_Speed(__SPEED_V2)

/* ASSIGNMENTS */

#define __SPEED_A4 \
__SPEED_V3 = 0
#define __SPEED_A5 \
__SPEED_V3 = (__SPEED_V3+1)
#define __SPEED_A6 \
__SPEED_V2 = __SPEED_V3

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int SPEED_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static __SPEED__reset_input () {
__SPEED_V0 = _false;
__SPEED_V1 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __SPEED_R[2] = {_true,_false};

/* AUTOMATON ENGINE */

int SPEED () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[5];
E[0] = (__SPEED_R[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__SPEED_A2));
if (E[0]) {
__SPEED_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A6\n");
#endif
}
if (E[0]) {
__SPEED_A3;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A3\n");
#endif
}
E[1] = !(_true);
E[2] = (__SPEED_R[0]||E[0]);
if (E[2]) {
__SPEED_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A4\n");
#endif
}
E[3] = (__SPEED_R[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__SPEED_A2)));
E[3] = (__SPEED_R[1]&&E[3]);
E[4] = (E[3]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__SPEED_A1)));
E[3] = (E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__SPEED_A1));
if (E[3]) {
__SPEED_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A5\n");
#endif
}
__SPEED_R[1] = ((E[2]||((E[4]&&__SPEED_R[1])))||E[3]);
E[4] = __SPEED_R[1];
__SPEED_R[0] = !(_true);
__SPEED__reset_input();
return E[4];
}

/* AUTOMATON RESET */

int SPEED_reset () {
__SPEED_R[0] = _true;
__SPEED_R[1] = _false;
__SPEED__reset_input();
return 0;
}
