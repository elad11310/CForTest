#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "Header.h"

int main() {

	Node** head = NULL;
	head = (Node**)malloc(sizeof(Node*));
	*head = NULL;
	insert(head, 2);
	insert(head, 2);
	insert(head, 1);
	insert(head, 4);
	//print(head);
	//freeList(head);
	write(head);
	return 0;

}


