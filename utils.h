#ifndef __UTILS_H
#define __UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/time.h>
#include <string>
#include <vector>
#include <unistd.h>

#define MSEC(x) x*1000

long get_elasped_time(struct timeval& start, struct timeval& end);
long time_stamp(void);

void woman_wants_to_enter(Person* p);
void man_wants_to_enter(Person* p);
void woman_leaves(Person* p);
void man_leaves(Person* p);

#endif
