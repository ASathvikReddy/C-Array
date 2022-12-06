#include<stdio.h>
int bubble_sort(int *arr,int n)
{
	int i,j,temp,k,sc=0;
	j=i+1;
	for(k=0;k<n;k++)
	{
		sc=0;
		for(i=0,j=i+1;i<n-k-1;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
	//	for(i=0;i<n;i++)
	//	{
	//		printf("%d ",arr[i]);
	//	}
	//	printf("\n%d\n\n",sc);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}


//8
//55 66 22 11 77 23 43 56
//11 22 23 43 55 56 66 77
