/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

#include "sorting_algorithms.h"

void bubble_sort(int *array, int length)
{
   int i, j,tmp;

   for (i = 0; i < length ; i++)
   {
      for (j = i; j < length ; j++)
      {
          if (array[i] > array[j])
          {
              tmp = array[i];
              array[i] = array[j];
              array[j] = tmp;
          }
      }
   }
}
void insertion_sort(int * array, int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = array[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && array[j] > key)
       {
           array[j+1] = array[j];
           j = j-1;
       }
       array[j+1] = key;
   }
}
void init_random(int * array, int small){
  for (int i = 0; i < small; i++) {
    array[i] = rand();
  }
}
