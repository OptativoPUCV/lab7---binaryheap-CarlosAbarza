#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if (!pq) {
    printf("No se ingreso una cola\n");
    return NULL;
  }

  else if (pq->size == 0) {
    printf("La cola esta vacia\n");
    return NULL;
  }

  return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap *new = (Heap*) malloc(sizeof(Heap));
  if (!new) {
    printf("No se pudo crear el heap\n");
    return NULL;
  }

  new->heapArray = (heapElem*) malloc(3* sizeof(heapElem));
  if (!new->heapArray) {
    printf("No se pudo reservar memoria para el heap\n");
    return NULL;
  }

  new->size = 0;
  new->capac = 3;
  return new;
}
