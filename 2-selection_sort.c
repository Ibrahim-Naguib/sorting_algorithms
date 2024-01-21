#include "sort.h"

/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: No return value.
 */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of ints using the Selection Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: No return value.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;

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
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
