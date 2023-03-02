#include <stdio.h>
void main()
{
    int i,j,temp,n3,n1,n2,a[5],b[5],c[5];
    printf("Enter the size of array\n");\
    scanf("%d",&n1);
    printf("Enter the data in first array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of array\n");\
    scanf("%d",&n2);
    printf("Enter the data in second array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
      c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
      c[i+n1]=b[i];
    }
    printf("Array after merge\n");
    for(i=0;i<n3;i++)
    {
        printf("%d\t",c[i]);
    }
    printf("\nSorted elements\n");
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
        printf("%d\t",c[i]);
    }
}
