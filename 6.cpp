#include<stdio.h>
#include<math.h>
int main ()
{
	int i,j,s,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (s=0;s<=i;s++)
		printf(" ");
		for (j=0;j<n-2*i+4;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
