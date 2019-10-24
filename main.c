#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
	struct node *tail = malloc(sizeof(struct node));;
	tail->next = NULL;
	tail->i = 32;
	print_list(tail);
	struct node *theHead;
	theHead = insert_front(insert_front(insert_front(insert_front(insert_front(tail, 16),8),4),2),1);
	print_list(theHead);
	print_list(free_list(theHead));
	return 0;
}
