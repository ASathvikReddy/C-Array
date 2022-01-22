#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,min,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<n)
		{
		min=a[i];
		}
	}
	printf("%d",min);
}
