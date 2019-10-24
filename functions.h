struct node {
	int i;
	struct node *next;
	};

void print_list(struct node* head);

void print_list_iter(struct node* head);

struct node * insert_front(struct node * head, int x);

struct node * free_list(struct node * head);