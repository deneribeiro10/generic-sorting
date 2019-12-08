#include "list_sort.h"

static int _compare(int a, int b) {
  return a < b;
}

static void _swap(void *a, void *b) {
  List nodeA = (List)a;
  List nodeB = (List)b;
  int temp = getVal(nodeA);
  setVal(nodeA, getVal(nodeB));
  setVal(nodeB, temp);
}

static void *_getNext(void *node) {
  List nodeList = (List)node;
  nodeList = getNext(nodeList);
  return (void*)nodeList;
}

static int _getValue(void *node) {
  List nodeList = (List)node;
  return getVal(nodeList);
}

void listSelectionSort(List l) {
  linkedListSelectionSort(
    l,
    _compare,
    _swap,
    _getNext,
    _getValue
  );
}
