#include "sort.h"
/**
 * selection_sort - selection sorting algorithm with
 * big o notation of n^2
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: return void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, mid_index, temp;

	if size < 2
		return;

	for (i = 0; i < size; i++)
	{
		mid_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mid_index])
				mid_index = j;
		}
		temp = array[mid_index];
		array[mid_index] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
