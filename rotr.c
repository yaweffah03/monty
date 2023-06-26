#include "monty.h"

/**
<<<<<<< HEAD
* f_rotr - rotates the stack to the bottom
=======
* f_rotr - function that rotates the stack to the bottom
>>>>>>> a45ef07ad2198441207b0411ff90100a76337e18
* @head: stack head of the stack
* @counter: line count
*
* Return: nothing
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
