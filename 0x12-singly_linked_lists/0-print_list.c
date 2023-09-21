#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialize the count to 0 */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
