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
 * partition - Implements the partition step of the Quick Sort algorithm.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @low: The index of the leftmost element.
 * @high: The index of the rightmost element.
 *
 * Return: The index of the pivot after partitioning.
 */

int partition(int *array, size_t size, int low, int high)
{
	int *pivot, above, below;

	pivot = array + high;
	for (above = below = low; below < high; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * quick_sort_recursion - Recursively sorts an array.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * @low: The index of the lower bound.
 * @high: The index of the upper bound.
 *
 * Return: No return value.
 */

void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	int pivot;

	if (high - low > 0)
	{
		pivot = partition(array, size, low, high);
		quick_sort_recursion(array, size, low, pivot - 1);
		quick_sort_recursion(array, size,  pivot + 1, high);
	}
}


/**
 * quick_sort - Sorts an array of integers using the Quick Sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: No return value.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, size, 0, size - 1);
}
