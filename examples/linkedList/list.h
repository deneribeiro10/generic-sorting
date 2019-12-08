#ifndef __LIST_H__
#define __LIST_H__

#include <stdlib.h>
#include <stdio.h>

typedef struct list * List;
struct list {
  int val;
  List next;
};

void init(List *l);
void insert(List *l, int val);
List getNext(List l);
void show(List l);
void setVal(List l, int val);
int getVal(List l);

#endif
