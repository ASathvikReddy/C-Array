#include<stdio.h>
int main()
{
	int size,i,sum=0;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	   printf("%d",sum);
	   return 0;
}
