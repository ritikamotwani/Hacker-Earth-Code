#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,a[1001],i,sum=0,j;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j!=i&&a[j]!=0&&a[i]!=0)
				{
					if(a[j]==a[i])
					{
						sum=sum+1;
						a[j]=0;
						a[i]=0;

						break;
					}

				}
			}
		}
		printf("%d\n",sum);
	}
}
