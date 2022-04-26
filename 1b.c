#include<stdio.h>
int main()
{
	int a,b,c,i;
	i=0;
	for(a=1;a<5;a++)
	{
		for(b=1;b<5;b++)
		{
			for(c=1;c<5;c++)
			if(a!=b&&a!=c&&b!=c)
			{
				i++;
				printf("%d%d%d\n",a,b,c);
			}
		}
	}
	printf("mumber=%d",i);
	return 0;
}