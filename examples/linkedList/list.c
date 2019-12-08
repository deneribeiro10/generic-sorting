#include "list.h"

void init(List *l) {
  *l = NULL;
}

void insert(List *l, int val) {
  List it = *l, new;
  
  new = (List) malloc(sizeof(struct list));
  new->next = NULL;
  new->val = val;

  if(it == NULL) *l = new; 
  else {
    while (it->next != NULL) {
      it = it->next;
    }
    it->next = new;
  }
}

List getNext(List l) {
  return l->next;
}

void show(List l) {
  List it = l;
  while (it != NULL) {
    printf("%d ", it->val);
    it = it->next;
  }
  printf("\n");
}

void setVal(List l, int val) {
  l->val = val;
}

int getVal(List l) {
  return l->val;
}
