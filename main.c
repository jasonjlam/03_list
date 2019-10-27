#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
	struct node *tail = malloc(sizeof(struct node));
	tail->next = NULL;
	tail->i = 32;
	print_list(tail);
	struct node *theHead;
	theHead = insert_front(insert_front(insert_front(insert_front(insert_front(tail, 16),8),4),2),1);
	print_list(theHead);
	print_list(free_list(theHead));
	
	struct node *tail2 = malloc(sizeof(struct node));
	tail2->next = NULL;
	tail2->i= -1;
	struct node *head2;
	head2 = insert_front(insert_front(insert_front(tail2, 1),-1),1);
	print_list(head2);
	remove_node(head2,-1);
	print_list(remove_node(head2,-1));
	
	struct node *tail3 = malloc(sizeof(struct node));
	tail3->next = NULL;
	tail3->i = 4;
	struct node *head3;
	head3 = insert_front(insert_front(tail3, 1),1);
	print_list(head3);
	print_list(remove_node(head3,4));
	struct node *tail4 = malloc(sizeof(struct node));
	tail4->next = NULL;
	tail4->i = 0;
	struct node *head4;
	head4 = insert_front(insert_front(tail4, 0),0);
	print_list(head4);
	print_list(remove_node(head4, 1));
	return 0;
}
