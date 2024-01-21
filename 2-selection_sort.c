#include "sort.h"

/**
 * selection_sort - Sorts an array of ints using the Selection Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: No return value.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
	}
}
