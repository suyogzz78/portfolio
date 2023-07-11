#include<stdio.h>
int fibbo(int n)
{
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	//else
	return fibbo(n-1)+fibbo(n-2);
}

	int main()
	{
		int tn,i;
		printf("enter nth term :");
		scanf("%d",&tn);
		for(i=0;i<=tn;i++);
		{
			printf("%d\t",fibbo(i));
		}
		return 0;
	}
	

