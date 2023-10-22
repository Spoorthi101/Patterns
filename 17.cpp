#include<stdio.h>
int main ()
{
	int i,j,n,k=1;
	scanf("%d",&n);
	for (i=0;i<=n+1;i++)
		{
			for (j=1;j<i;j++)
			{
			printf("%d ",k);
				k++;
			}
			printf("\n");
		
    }

    return 0;
}
