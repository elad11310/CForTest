#include "Header.h"

void insert(Node** h, int data) {
	if (!*h) {
		*h = newNode(data, NULL);
	}
	else {
		Node** p = h;
		while ((*p)->next != NULL) {
			p = &((*p)->next);
		}
		(*p)->next = newNode(data, NULL);
	}
}



Node* newNode(int data, Node* next) {
	Node* p = (Node*)malloc(sizeof(Node));
	if (p != NULL) {
		p->data = data;
		p->next = next;
		return p;
	}
	return NULL;
}
void print(Node** h) {
	while (*h) {
		printf("%d ", (*h)->data);
		h = &((*h)->next);
	}
}

void removeNode(Node** h, int data) {
	if (!*h) {
		return;
	}
	if ((*h)->data == data) {
		do {
			Node* t = *h;
			*h = t->next;
			free(t);
		} while ((*h)->data == data && *h);
	}
	Node** p = h;

	while (*p) {
		if ((*p)->next && (*p)->next->data == data) {
			Node* s = (*p)->next;
			(*p)->next = (*p)->next->next;
			free(s);
		}
		else
			p = &(*p)->next;
	}

}
void freeList(Node** h) {
	Node** p = h;
	while (*p) {
		Node* s = *p;
		*p = s->next;
		free(s);
		
	}
}

void write(Node** h) {
	Node** p = h;
	
	FILE** f = fopen(f,"myFile.bin", "wb");
	while (*h) {
		fwrite(*p, sizeof(Node), 1,*f);
	}
}

