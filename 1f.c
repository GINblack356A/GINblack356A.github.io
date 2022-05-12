#include<stdio.h>
int main()
{
    int i,j,min,a[10],t;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
            {
			if(a[min]>a[j]) min=j;
			}
            t=a[min];
            a[min]=a[i];
            a[i]=t;
        
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

