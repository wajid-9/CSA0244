#include<stdio.h>
int main()
{
	int n,fib,f1,f2,i;
	printf("enter the number\n");
	scanf("%d",&n);
	i=1,f1=0,f2=1;
	do
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		i=i+1;
		printf("%d\t",fib);
	}
	while(i<=n);

}
