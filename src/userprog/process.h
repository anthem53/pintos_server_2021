#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);

/* Own functions for project2 */
int push_esp(char * s , void ** esp);
char * strrev (char * c) ;


#endif /* userprog/process.h */
