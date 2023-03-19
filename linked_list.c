/**
* @file: linked_list.c
* @author: Jesutofunmi Kupoluyi
* @brief: This is a program to practice
* linked lists.
* @date: 19 March, 2023
*/

// Including libraries
#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

typedef struct node node_t;



// Main function
int main(int argc, char **argv)
{
	// Declaring static variables
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;

	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;

	node_t *tmp = head;

	while (tmp != NULL)
	{
		printf("%d - ", tmp->value);
		tmp = tmp->next;
	}

	printf(" \a Linked list test!!! \n");

	return 0;
}
