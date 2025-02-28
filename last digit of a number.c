#include<stdio.h>
int main()
{
	int n,lastdigit;
	printf("enter a number:");
	scanf("%d",&n);
	lastdigit=n-((n/10)*10);
	printf("The lastdigit of %d: %d \n",n,lastdigit);
	return 0;
}
