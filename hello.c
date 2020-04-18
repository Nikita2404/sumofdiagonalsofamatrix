#include<stdio.h>
#include<conio.h>
int main()
{
	int num[20][20],sum=0,sum1=0,i,j,n;
	
	printf("enter the rows and columns of a matrix");
	scanf("%d",&n);
	printf("enter the elements of the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements in [%d] [%d] \t",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	printf("matrix is...");

		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",num[i][j]);
			
		}
	}
printf("\n");

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
			sum=sum+num[i][j];
		}
		if(i+j==n-1)
		{
			sum1=sum1+num[i][j];
		}
	}
}

printf("sum is %d \t and %d",sum,sum1);
}
