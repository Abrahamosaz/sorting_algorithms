#include "sort.h"
/**
 * partition - partition the array for sorting
 * @array: address of the array
 * @left: start index of the array
 * @right: end index of the array
 * @size: size of the array
 *
 * Return: return pivot index
 */
int partition(int *array, int left, int right, int size)
{
	int pivot, i, pindex, temp;

	pivot = array[right];

	for (i = left, pindex = left; i < right; i++)
	{
		if (array[i] < pivot)
		{
			temp = array[pindex];
			array[pindex] = array[i];
			array[i] = temp;
			pindex++;
			print_array(array, size);
		}
	}
	array[right] = array[pindex];
	array[pindex] = pivot;
	print_array(array, size);

	return (pindex);
}
/**
 * quick_sort_rec - recursive function to sort the array
 * @array: pointer to the array
 * @left: start index of the array
 * @right: end index of the array
 * @size: size of the array
 *
 * Return: return void
 */
void quick_sort_rec(int *array, int left, int right, int size)
{
	int pivot;

	if (left >= right)
		return;

	pivot = partition(array, left, right, size);
	quick_sort_rec(array, left, pivot - 1, size);
	quick_sort_rec(array, pivot + 1, right, size);
}
/**
 * quick_sort - call the quick_sort_rec function
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: return void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}
