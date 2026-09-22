#include <stdio.h>
int main()
{
    int i,n,pos,a[100];
    printf("enter the number of elemnts\n");
    scanf("%d",n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where element is to entered\n");
    scanf("%d",pos);
    printf("enter the element to be entered");
    scanf("%d",n);
    for (i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=n;
    printf("array after insertion\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}