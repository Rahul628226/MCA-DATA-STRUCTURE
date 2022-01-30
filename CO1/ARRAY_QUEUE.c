#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int rear=-1;
int front=-1;
int queue[MAX];
void show();
void dequeue();
void enqueue();
int main()
{
    while(1)
    {
        printf("Enter your choice\n1.insertion\n2.deletion\n3.display\n4.exit");
        int opt;
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(1);
            default:
            printf("INVALID CHOICE");
        }
    }
    return 0;
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        int item;
        if(front==-1)
        {
            front=0;
        }
        printf("ENTER THE ITEM TO BE INSERTED");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
        
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("UNDER FLOW");
    }
    else
    {
        printf("Element deleted from queue is %d",queue[front]);
        front++;
    }
}
void show()
{
    if(front==-1 && rear==-1)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("[%d]",queue[i]);
        }
    }
}
