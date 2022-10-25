#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"

/**
 *  * list_len - Finds the number of elements in
 *
 *   *            a linked list_t list.
 *
 *    * @h: The linked list_t list.
 *
 *     *
 *
 *      * Return: The number of elements in h.
 *
 */

size_t list_len(const listint_t *h)

{
	size_t nodenum = 0;
	while (h)
	{
	nodenum++;
	h = h->next;
		}



return (nodenum);
}
