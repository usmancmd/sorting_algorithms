#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: array to sort
 * @size: size(length) of the array
 *
 * Return: NULL
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	int n = size;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, n);
			}
		}
	}
}
