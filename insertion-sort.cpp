//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  for(int i = 1;i<size;i++){
   int temp = A[i];
   int j = i;
   for(;j>0 && temp<A[j-1];j--){
     A[j]= A[j-1];
     A[j]= temp;
   }
 }
}
