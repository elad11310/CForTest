#pragma once
#include<stdlib.h>
#include <stdio.h>
typedef struct Node {
	int data;
	struct Node* next;
} Node;
void print(Node** h);
void insert(Node** h, int data);
Node* newNode(int data, Node* next);
void removeNode(Node** h, int data);
void freeList(Node** h);
void deleteFirst(Node* head);
void write(Node** h);
