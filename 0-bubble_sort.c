#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the Bubble Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: No return value.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, swapped;

	if (array == NULL || size < 2)
		return;

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
	} while (swapped == 1);
}
