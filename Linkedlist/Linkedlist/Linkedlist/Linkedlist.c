#include "Node.h"

void insertNode(char data)
{
	Node* tempNode;

	if ((tempNode = (Node*)malloc(sizeof(Node))) == NULL)
	{
		printf("error");
		return;
	}
	else
	{
		tempNode->data = data;
		tempNode->next = headNode->next;
		headNode->next = tempNode;
	}
};

void removeNode(char data)
{
	Node* tempNode;

	if ((tempNode = (Node*)malloc(sizeof(Node))) == NULL)
	{
		printf("error");
		return;
	}
	else
	{

	}
};
Node* searchNode(char findData)
{

};

void init()
{
	headNode = (Node*)malloc(sizeof(Node));
	tailNode = (Node*)malloc(sizeof(Node));
	headNode->next = tailNode;
	tailNode->next = tailNode;
}

void printList()
{
	Node* tempNode = (Node*)malloc(sizeof(Node));
	tempNode = headNode->next;

	while (tempNode->next != tempNode)
	{
		printf("%c ", tempNode->data);
		tempNode = tempNode->next;
	}
};

int main()
{
	init();
	insertNode('a');
	insertNode('b');
	insertNode('c');
	printList();

}

