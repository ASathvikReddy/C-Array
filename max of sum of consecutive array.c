#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,sum,max;
     for(i=0;i<n;i++)	
     {
     	scanf("%d",&a[i]);
	 }
	 max=a[0]+a[1];
	 for(i=1;i<n-1;i++)
	 {
	 	sum=a[i] + a[i+1];
     	if(sum>max)
     	{
     		max=sum;
		}
     }
         printf("%d",max);
}
