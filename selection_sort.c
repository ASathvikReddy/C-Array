#include<stdio.h>
int max(int *arr,int n)
{
	int ind=0,me=arr[0],i;
	for(i=0;i<=n;i++)
	{
		if(arr[i]>me)
		{
			me=arr[i];     
			ind=i;
		}
	}
	return ind;
}
int selection_sort(int *arr,int n)
{
	int i,temp,max_ind;
	for(i=n-1;i>=0;i--)
	{
		max_ind=max(arr,i);
		temp=arr[i];
		arr[i]=arr[max_ind];
		arr[max_ind]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}



/*
selection_sort
66 44 22 77 88  43  11 10
0 1   2 3   4   5   6   7  
10 11 22 43 44 66 77 88*/
