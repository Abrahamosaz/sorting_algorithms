#ifndef SORT_H
#define SORT_H
/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* function prototype */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *, size_t);
void insertion_sort_list(listint_t **);
void selection_sort(int *, size_t);
void quick_sort(int *, size_t);
#endif
