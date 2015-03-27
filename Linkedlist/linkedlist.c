#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node *link;
} Node;

int searchNode(Node *p, char);
void insertNode(Node *p, char);
void removeNode(Node *p, char);
void printNode();

int main() {
    Node *p;

    insertNode(p, 'a');
    printNode(p);

    return 0;
}

int searchNode(Node *p, char data) {
    Node *head;
    int index = 0;
    head = p;
    p->link = head;
    while (head->data != data) {
        head = head->link;
        index++;
        if (head->link == NULL) return -1;
    }
    return index;
}

void insertNode(Node *p, char data) {
    Node *newNode;
    while (p->link != NULL) {
        p = p->link;
        if (p->link == NULL) {
            p->link = newNode;
            newNode->data = data;
        }
    }
}

void removeNode(Node *p, char data) {
    Node* head, *prev;
    head = p;
    while (head->link != NULL) {
        head = head->link;
        prev->link = head;
        if (head->data == data) {
            prev->link = head->link;
        }
    }
}

void printNode(Node *p) {
    while (p->link != NULL) {
        printf("%c -> ", p->data);
        p = p->link;
    }
    printf("NULL\n");
}
