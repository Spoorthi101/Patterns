#include<stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			for (j=0;j<=n-i;j++)
			{
			printf("%c",i+64);
		    }
		    
			printf("\n");
	
    }

    return 0;
}
