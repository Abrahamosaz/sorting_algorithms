#include "sort.h"
/**
 * swap - swap two nodes prev and current node position
 * @head: head of the linked list
 * @node1: previous node to swap
 * @node2: current node to swap
 *
 * Return: return void
 */
static
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next = NULL;

	if (!head || !node1 || !node2)
		return;

	prev = node1->prev;
	next = node2->next;

	if (prev)
		prev->next = node2;
	else
		*head = node2;
	node2->prev = prev;
	node2->next = node1;
	node1->prev = node2;
	node1->next = next;
	if (next)
		next->prev = node1;
}
/**
 * insertion_sort_list - sorting algorithm with big o notation of n^2
 * @list: pointer to the head of a linked_list
 *
 * Return: return void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *dir = (*list)->next, *i = NULL;

	if (!list || !*list)
		return;

	for (; dir; dir = dir->next)
	{
		for (i = dir; i->prev && i->prev->n > i->n;)
		{
			swap(list, i->prev, i);
			/* i = i->next;*/
			print_list(*list);
		}
	}
}
