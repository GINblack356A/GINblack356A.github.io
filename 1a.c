#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int a,b,c;
    srand((unsigned)time(NULL));
    a = rand();
    scanf("%d",&b);
    printf("you:");
    if(b==0)
    	printf("shears\n");
    	else if(b==1)
    	printf("rock\n");
    	else if(b==2)
    	printf("cloth\n");
    c=a%3;
    printf("computer:");
    if(c==0)
    	printf("shears\n");
    	else if(c==1)
    	printf("rock\n");
    	else if(c==2)
    	printf("cloth\n");
    if(c==0)
    {
    	if(b==0)
    	printf("no people win");
    	else if(b==1)
    	printf("you win");
    	else if(b==2)
    	printf("computer win");
	}
	else if(c==1)
	{
    	if(b==0)
    	printf("computer win");
    	else if(b==1)
    	printf("no people win");
    	else if(b==2)
    	printf("you win");
	}
	else if(c==2)
	{
    	if(b==0)
    	printf("you win");
    	else if(b==1)
    	printf("computer win");
    	else if(b==2)
    	printf("no people win");
	}
    return 0;
}