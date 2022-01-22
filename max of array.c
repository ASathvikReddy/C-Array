#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,max,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>n)
		{
		max=a[i];
		}
	}
	printf("%d",max);
}
