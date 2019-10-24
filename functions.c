#include <stdio.h>
#include <stdlib.h>

struct node {
	int i;
	struct node *next;
	};

// Tried doing recursive approach

void print_list_iter(struct node* head) {
	printf("%d ", head->i);
	if (head->next == NULL || head == NULL) {
		printf("]\n");
	}
	else {
		print_list_iter(head->next);
	}
}

void print_list (struct node* head) {
	printf ("Printing items in list:\n[ ");
	print_list_iter(head);
}

struct node * insert_front(struct node * head, int x) {
	struct node *newHead = malloc(sizeof(struct node));
	newHead->next = head;
	newHead->i = x;
	
}

// Tried iterating through

struct node * free_list(struct node * head) {
	struct node *orig = head;
	struct node *temp = head->next;
	while (head != NULL) {
		printf("Freeing node containing: %d \n", head->i);
		temp = head;
		head = head->next;
		*head = NULL;
		free(temp);
		
	}
	return orig;
}