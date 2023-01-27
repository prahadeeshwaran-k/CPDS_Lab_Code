//Develop a C Program to implement Queue ADT operations such as insertion and deletion using array
// Created by praha on 27-01-2023.
//
#include<stdio.h>
#define n 5
#include<stdlib.h>
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
                break;
            case 2:
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
                break;
            case 3:
                printf("\nQueue Elements are:\n ");
                for(i=front; i<rear; i++)
                    {
                        printf("%d",queue[i]);
                        printf("\n");
                    }
                    break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");

        }
    }
    return 0;
}

