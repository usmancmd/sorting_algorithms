#include <stdio.h>
#include "sort.h"


/**
* bubble_sort - sort array using bubble sort algorithm
* @array: array to sort
* @size: size(length) of the array
*
* Return: NULL
*/

void bubble_sort(int *array, size_t size);
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1])
				print_array(array, size)
		}
	}
}
