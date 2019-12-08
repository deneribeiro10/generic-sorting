#ifndef __SELECTION_SORT_H__
#define __SELECTION_SORT_H__

#include <stdlib.h>

void vectorSelectionSort( 
  void *arr, 
  int n, 
  int (*compare)(int a, int b),
  void (*swap)(void *arr, int i, int j),
  int (*getIndex)(void *arr, int index)
);

void linkedListSelectionSort(
  void *firstNode,
  int (*compare)(int a, int b),
  void (*swap)(void *nodeA, void *nodeB),
  void *(*getNext)(void *node),
  int (*getValue)(void *node)
);

#endif
