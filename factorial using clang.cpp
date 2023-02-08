#include<stdio.h>
int main()
{
	int i,n,f;
	printf("enter a number\n");
	scanf("%d",&n);
	i=1,f=1;
	while(i<=n)
	{
		f=f*i;
		i=i+1;
	}
   	printf("the factorial of the number is %d",f);
    
	
}
