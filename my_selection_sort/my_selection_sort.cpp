/*
 Definitions for the function used to implement the selection sort algorithm.
 */

#include "my_selection_sort.hpp"
#include "iostream"

void mySelectionSort(int *arrayToSort, int size) {
   int indexOfSmallest;
   for(int count1 = 0; count1 < size; count1 ++) {
      indexOfSmallest = count1;
      for(int count2 = count1 + 1; count2 < size; count2++) {
         if(arrayToSort[count2] < arrayToSort[indexOfSmallest])
            indexOfSmallest = count2;
      }
      std::swap(arrayToSort[count1], arrayToSort[indexOfSmallest]);
   }
}
