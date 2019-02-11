//============================================================================
// Name        : shell-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
ShellSort::sort(int A[], int size)
{
  for(int gap = size/2;gap>0;gap/=2){
  for(int i = gap;i<size;i++){
    int temp = sort[i];
    int j ;
    for(j = i;j>=gap && sort[j-gap]>temp;j-=gap){
      sort[j]=sort[j-gap];
    }
    sort[j]=temp;
  }
}
}
