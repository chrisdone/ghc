/* -----------------------------------------------------------------------------
 * $Id: RtsUtils.h,v 1.8 2000/03/16 17:23:35 simonmar Exp $
 *
 * (c) The GHC Team, 1998-1999
 *
 * General utility functions used in the RTS.
 *
 * ---------------------------------------------------------------------------*/

extern void *stgMallocBytes(int n, char *msg);
extern void *stgMallocWords(int n, char *msg);
extern void *stgReallocBytes(void *p, int n, char *msg);
extern void *stgReallocWords(void *p, int n, char *msg);
extern void barf(char *s, ...) __attribute__((__noreturn__)) ;
extern void belch(char *s, ...);
extern void prog_belch(char *s, ...);

extern void _stgAssert (char *filename, unsigned int linenum);

extern void stackOverflow(void);
extern void heapOverflow(void);

void resetNonBlockingFd(int fd);

extern nat stg_strlen(char *str);

/*Defined in Main.c, but made visible here*/
extern void stg_exit(I_ n) __attribute__((noreturn));

char *time_str(void);
char *ullong_format_string(ullong, char *, rtsBool);
//ullong   msTime(void);


