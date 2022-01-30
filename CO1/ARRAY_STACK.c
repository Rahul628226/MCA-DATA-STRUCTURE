#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int top=-1;
int stack[MAX];
int item;
void insertion();
void deletion();
void display();
int main()
{
    
    while(1)
    {
        int opt;
        printf("Enter Your Choice \n1.INSERTION\n2.DELETION\n3.display\n4.exit");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("INVALID CONDITION");
        }
    }
    return 0;
}
void insertion()
{
    if(top==MAX-1)
    {
        printf("Overflow");
    }
    else
    {
        printf("ENTER THE ITEM TO BE INSERTED");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void deletion()
{
    if(top==-1)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        item=stack[top];
        top--;
        printf("THE POPED ELEMENT IS %d",item);
    }
}
void display()
{
    if(top==-1)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("[%d]",stack[i]);
        }
    }
}
