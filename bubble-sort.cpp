//============================================================================
// Name        : bubble-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
  for(int i = 0;i<size;i++){
    bool const = false;
    for(int j = 0;j<(size-i);j++){
      if(A[j]>A[j+1]){
        swap(A[j],A[j+1]);
        const = true;
      }
      if(!const)break;
    }
  }
}
