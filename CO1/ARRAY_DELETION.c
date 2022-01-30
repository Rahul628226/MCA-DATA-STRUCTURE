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
    printf("Enter the position to be deleted");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];

    }
    n--;
    printf("After deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }

}
