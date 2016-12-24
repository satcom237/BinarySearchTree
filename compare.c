#include <stdio.h>
#include "bst.h"
#include "assert.h"
#include "structs.h"

/*----------------------------------------------------------------------------
   very similar to the compareTo method in java or the strcmp function in c. it
    returns an integer to tell you if the left value is greater then, less then, or
     equal to the right value. you are comparing the number variable, letter is not
      used in the comparison.

       if left < right return -1
        if left > right return 1
	 if left = right return 0
*/

/*Define this function, type casting the value of void * to the desired type.
    The current definition of BST_DATA_TYPE in bst.h is void*, which means that left and
      right are void pointers. To compare left and right, you should first cast
        left and right to the corresponding pointer type (struct data *), and then
	  compare the values pointed by the casted pointers.

	    DO NOT compare the addresses pointed by left and right, i.e. "if (left < right)",
	      which is really wrong.
*/
int compare(BST_DATA_TYPE left, BST_DATA_TYPE right)
{
  struct data* data1;
  struct data* data2;
  data1=(struct data*)left;
  data2=(struct data*)right;

  if(data1 == NULL || data2 == NULL) return 0;
  if (data1->number < data2->number)
    return -1;
  else if (data1->number > data2->number)
    return 1;
  else
    return 0;


}

/*Define this function, type casting the value of void * to the desired type*/
void print_type(BST_DATA_TYPE curval)
{
  struct data* data1;
  data1=(struct data*)curval;
  printf(" %d ", data1->number);
}


