#ifndef DYNAMICMEMORY_H
#define DYNAMICMEMORY_H

#include <stdio.h>
#include <stdlib.h>

int MemoryAllocation(){
  int* area = (int*)malloc(123);
  //printf("%lu", sizeof(int));
  const int SIZE = 10;
  //int* array = (int*) malloc(sizeof(int) * SIZE);
  int* array = (int*) calloc(SIZE, sizeof(int));
  int array2[SIZE];
  for (int i = 0; i < SIZE; ++i){
    *(array + i) = i * 10;
  }
  for (int i = 0; i < SIZE; ++i){
    printf("%d ", *(array + i));
  }
  printf("\n");
  for (int i = 0; i < SIZE; ++i){
    array2[i] = i * 10;
  }
  for (int i = 0; i < SIZE; ++i){
    printf("%d ", array[i]);
  }


  return 0;
}

#endif // DYNAMICMEMORY_H
