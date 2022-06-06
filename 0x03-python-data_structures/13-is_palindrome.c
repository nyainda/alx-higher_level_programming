#include "lists.h"

/**
 * is_palindrome - wut
 * @head: list
 * Return: 1 | 0
 */
int is_palindrome(listint_t **head)
{
	int listlen = listlen_t(*head);
	int *array = malloc(sizeof(int) * listlen);
	int index; /* Used to populate data into array */
	int begin, end;
	listint_t *temp;

	if (head == NULL || *head == NULL || array == NULL)
	{
		free(array);
		return (1);
	}

	for (temp = *head, index = 0; temp != NULL; temp = temp->next, index++)
		array[index] = temp->n;

	for (begin = 0, end = listlen - 1; begin < listlen / 2; begin++, end--)
	{
		if (array[begin] != array[end])
		{
			free(array);
			return (0); /* 0 if not a palindrome */
		}
	}
	free(array);
	return (1); /* It was a palindrome */
}

/**
 * listlen_t - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t listlen_t(listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
