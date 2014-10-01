/* sscc : C CODE OF SORTED EQUATIONS COUNT - INLINE MODE */

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
#define __COUNT_GENERIC_TEST(TEST) return TEST;
typedef void (*__COUNT_APF)();
extern __COUNT_APF *__COUNT_PActionArray;
extern (*__COUNT_scf[])();
extern (*__COUNT_dcf[])();

                   
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __COUNT_V0;
static boolean __COUNT_V1;
static integer __COUNT_V2;
static integer __COUNT_V3;


/* INPUT FUNCTIONS */

void COUNT_I_I () {
__COUNT_V0 = _true;
}
void COUNT_I_R () {
__COUNT_V1 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __COUNT_A1 \
__COUNT_V0
#define __COUNT_A2 \
__COUNT_V1

/* OUTPUT ACTIONS */

#define __COUNT_A3 \
COUNT_O_COUNT(__COUNT_V2)

/* ASSIGNMENTS */

#define __COUNT_A4 \
__COUNT_V3 = 0
#define __COUNT_A5 \
__COUNT_V3 = (__COUNT_V3+1)
#define __COUNT_A6 \
__COUNT_V2 = __COUNT_V3
#define __COUNT_A7 \
__COUNT_V3 = 0
#define __COUNT_A8 \
__COUNT_V2 = __COUNT_V3

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

int COUNT_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static __COUNT__reset_input () {
__COUNT_V0 = _false;
__COUNT_V1 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __COUNT_R[2] = {_true,_false};

/* AUTOMATON ENGINE */

int COUNT () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[6];
E[0] = (__COUNT_R[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__COUNT_A2));
if (E[0]) {
__COUNT_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A7\n");
#endif
}
if (E[0]) {
__COUNT_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A8\n");
#endif
}
E[1] = (__COUNT_R[0]||E[0]);
if (E[1]) {
__COUNT_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A4\n");
#endif
}
E[2] = (E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__COUNT_A1));
E[3] = (__COUNT_R[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__COUNT_A2)));
E[3] = (__COUNT_R[1]&&E[3]);
E[4] = (E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__COUNT_A1));
E[4] = (E[2]||E[4]);
if (E[4]) {
__COUNT_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A5\n");
#endif
}
if (E[4]) {
__COUNT_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A6\n");
#endif
}
if (((E[4]||E[0]))) {
__COUNT_A3;
#ifdef TRACE_ACTION
fprintf(stderr, "__abc_A3\n");
#endif
}
E[2] = !(_true);
E[3] = (E[3]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__COUNT_A1)));
E[5] = (E[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__COUNT_A1)));
__COUNT_R[1] = ((E[4]||((E[3]&&__COUNT_R[1])))||E[5]);
E[5] = __COUNT_R[1];
__COUNT_R[0] = !(_true);
__COUNT__reset_input();
return E[5];
}

/* AUTOMATON RESET */

int COUNT_reset () {
__COUNT_R[0] = _true;
__COUNT_R[1] = _false;
__COUNT__reset_input();
return 0;
}
