#include<stdio.h>
int main()
{
	int  N;
	scanf_s("%d", &N);
	int  A[100];
	for (int i = N-1;i >= 0;i--)
	{
		scanf_s("%d",&A[i]);
		
	}
	for (int i = 0;i <= N-1;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			printf("%d", A[i]);	
		}
		printf("\n");
	}
	  

	
	
		
	
	
	
	return 0;
}