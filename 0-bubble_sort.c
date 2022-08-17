#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/*
 * bubble_sort - a function that sorts an array of integers in
 * ascending order using the bubble sort algorithms
 * Description: a function bubble_sort sorts an array of integers
 * @array: array of integers
 * @size: size of array
 **/

void bubble_sort(int *array, size_t size)
{

	size_t a, b;
	int temp;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
