#include<stdio.h>
int main()
{
	int j,i,a;
	
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=i*j;
			printf("%d*%d=%-4d",i,j,a);
		}
		printf("\n");
		
	}
	return 0;
}