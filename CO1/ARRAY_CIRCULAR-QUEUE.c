#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int rear=-1;
int front=-1;
int queue[MAX];
int item;
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
    printf("ENTER THE ITEM TO BE INSERTED");
    scanf("%d",&item);
    if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else if((rear+1)%MAX==front)
    {
        printf("OverFlow");
        
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear]=item;

    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("UNDER FLOW");
    }
    else if(front==rear)
    {
        printf("Element deleted from queue is %d",queue[front]);
        front=rear=-1;
    }
    else
    {
         printf("Element deleted from queue is %d",queue[front]);
        front=(front+1)%MAX;
    }
}
void show()
{
    if(front==-1)
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
