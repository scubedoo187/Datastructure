#include <stdio.h>

typedef struct Node {
    char data;
    struct Node *link;
} Node;

void createList(char);
Node* searchNode(Node* p);
void insertNode(Node* p);
void removeNode(Node* p);
void printNode();
