#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - define function
 * @head: describe argument
 */

void free_listint(listint_t *head)

{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"4-free_listint.c" [New File]                                 0,0-1         All

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"4-free_listint.c" [New File]                                 0,0-1         All

