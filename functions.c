#include <stdio.h>
#include <stdlib.h>

struct node {
	int i;
	struct node *next;
	};

// Tried doing recursive approach

void print_list_iter(struct node* head) {
	if (head == NULL){
		printf("]\n");
		return;
	}
	printf("%d ", head->i);
	if (head->next == NULL) {
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
	struct node *thisNode = head;
	struct node *nextNode;
	while (nextNode != NULL) {
		printf("Freeing node containing: %d \n", thisNode->i);
		nextNode = thisNode->next;
		free(thisNode);
		thisNode = NULL;
		thisNode = nextNode;
	}
	return NULL;
}

struct node *remove_node(struct node * head, int data){
	struct node *thisNode = head;
	for (; (thisNode->next)->i == data; thisNode->next){
		}
	struct node *removedNode = thisNode->next;
	thisNode->next = removedNode->next;
	free(removedNode);
	}
