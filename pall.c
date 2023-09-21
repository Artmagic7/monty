#include "monty.h"
/**
 * f_pall - Emboss the stack
 * @head: Stack head
 * @counter: No used
 * Return: No retrn
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
