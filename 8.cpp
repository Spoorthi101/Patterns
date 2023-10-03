#include<stdio.h>
#include<math.h>
int main ()
{
	int i,j,s,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (s=0;s<n-i-1;s++)
		printf(" ");
		printf("* * * * *");
		printf("\n");
	}
	return 0;
}
