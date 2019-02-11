//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
  int i,j,min;
  for(i = 0;i<size-1;i++){
    min = i;
    for(j = i+1;j<size;j++){
      if(A[j]<A[min]){
        min = j;
      }
      swap(&A[min],&A[i]);
    }
  }
}
