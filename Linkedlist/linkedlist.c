#include <stdio.h>

typedef struct Node {
    char data;
    struct Node *link;
} Node;

int searchNode(Node* p, char);
void insertNode(char);
void removeNode(char);
void printNode();

int searchNode(Node* p, char data) {
    struct Node* head;
    int index = 0;
    head = (Node*)malloc(sizeof(Node*));
    head = p;
    while (head->data != data) {
        head = head->link;
        index++;
        if (head->link == NULL) return -1;
    }
    return index;
}
