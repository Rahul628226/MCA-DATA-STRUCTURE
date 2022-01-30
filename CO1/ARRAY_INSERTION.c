#include<stdio.h>
int main()
{
    int a[20],n,i,pos,item;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the Elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to be inserted");
    scanf("%d",&pos);
    n=n+1;
    if(pos>n||pos<=0)
    {
        printf("invalid");

    }
    else
    {
        printf("enter the elements");
        scanf("%d",&item);
        for(i=n-1;i>=pos;i--)
        {
            a[i]=a[i-1];

        }
        a[pos-1]=item;
    }
}
