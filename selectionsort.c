#include "selectionsort.h"

void vectorSelectionSort( void *arr, 
                    int n, 
                    int (*compare)(int a, int b),
                    void (*swap)(void *arr, int i, int j),
                    int (*getIndex)(void *arr, int index)) { 
  int i, j, min;
  for(i=0; i<n-1; i++) {
    min = i;
    for(j=i; j<n; j++) {
      if(compare(getIndex(arr, j), getIndex(arr, min))) min = j;
    }
    swap(arr, i, min);
  }
}

void linkedListSelectionSort(
  void *firstNode,
  int (*compare)(int a, int b),
  void (*swap)(void *nodeA, void *nodeB),
  void *(*getNext)(void *node),
  int (*getValue)(void *node)
) {
  void *toSwap;
  void *itI = firstNode;
  void *itJ;
  while(getNext(itI) != NULL) {
    toSwap = itI;
    itJ = getNext(itI);
    while(itJ != NULL) {
      if(compare(
        getValue(toSwap),
        getValue(itJ)
      )) {
        toSwap = itJ;
      }
      itJ = getNext(itJ);
    }
    swap(itI, toSwap);
    itI = getNext(itI);
  }
}
