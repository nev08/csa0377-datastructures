#include<stdio.h>
int main()
{
	int arr[100],i,n,s;
	int f,l,mid;
	int flag=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&arr[i]);
	}
	f=0;
	l=n-1;
	printf("element to be searched");
	scanf("%d",&s);
	while(f<=l)
	{
		mid=(f+l)/2;
		if(arr[mid]==s)
		{
			flag=1;
			break;
		}
		else if(arr[mid]>s)
		{
			l=mid-1;
		}
		else if(arr[mid]<s)
		{
			f=mid+1;
		}
	}
	
	if(flag==1)
	{
		printf("found");
	}
    else
	{
		printf(" not found");
	}
	return 0;
}
