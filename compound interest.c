#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,n;
	float amt,ci;
	scanf("%d %d %d %d",&p,&r,&t,&n);
	amt=p*pow((1+r/n),n*t);
	ci=amt-p;
	printf("%f",amt,ci);
	return 0;
}
