#include "sort.h"
/**
 * bubble_sort - sorting algorithm of big o notation of n^2
 * @array: address of the first element of the array
 * @size: size of the array
 *
 * Return: return void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if size < 2
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
