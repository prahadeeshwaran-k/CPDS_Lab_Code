//Develop a C Program to implement Stack ADT operations such as push, pop and peek using linked list
// Created by praha on 27-01-2023.
//

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void push(int val)
{
    //create new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void pop()
{
    //temp is used to free the head node
    struct node *temp;

        printf("Poped element = %d\n", head->data);
        temp = head;
        //make the head node points to the next node.
        //logically removing the node
        head = head->next;
        free(temp);
}

//print the linked list
void printList()
{
    struct node *temp = head;
    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Linked List\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();

    return 0;
}