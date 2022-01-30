#include<stdio.h>
void main()
{
    int a[10],b[10],c[20];
    int n1,n2,n3,i,j,temp;
    printf("ENTER THE SIZE OF FIRST ARRAY");
    scanf("%d",&n1);
    printf("ENTER THE SIZE OF SECOND ARRAY");
    scanf("%d",&n2);
    n3=n1+n2;
    printf("ENTER THE ELEMENTS IN FIRST ARRAY");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    int k=n1;
     printf("ENTER THE ELEMENTS IN SECOND ARRAY");
     for(i=0;i<n2;i++)
     {
         scanf("%d",&b[i]);
         c[k]=b[i];
         k++;
     }
     printf("\nMERGED ARRAY\n-------------------------------------------------------\n");
     for(i=0;i<n3;i++)
     {
         printf("%d",c[i]);
         printf("\n");
     }
     printf("AFTER SORTING");
     for(i=0;i<n3;i++)
     {
         for(j=i+1;j<n3;j++)
         {
             if(c[i]>c[j])
             {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
             }

         }
     }
     for(i=0;i<n3;i++)
     {
         printf("\n");
         printf("%d",c[i]);
         printf("\n");
     }

}
