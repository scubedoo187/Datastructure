#ifndef NODE_H_
#define NODE_H_

#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	char data;
	struct Node* next;
}Node;

Node* headNode;
Node* tailNode;


#endif