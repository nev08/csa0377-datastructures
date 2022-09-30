#include<stdio.h>
#include<stdlib.h>
#define size 5
int q[size],f=-1,r=-1,i;

void enqueue()
{
	int e;
	printf("enter the element");
	scanf("%d",&e);
	if(r==size-1)
	{
		printf("queue full");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=r=0;
		}
		else
		{
			r=r+1;
			q[r]=e;
		}
	}
}
void dequeue()
{
	int e;
	if(f==-1 && r==-1)
	{
		printf("queue empty");
	}
	else
	{
		e=q[r];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f=f+1;
			printf("the deleted elemnt is %d ",e);
		}
	}
	
}
void display()
{
	int i;
	if(f==-1 && r==-1)
	{
		printf("queue empty");
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("%d \t",q[i]);
		}
	}
}
int main()
{
	int c;
	//printf("enter the queue size:");
	//scanf("%d",&n);
	printf("\n 1.enqueue \n 2.dequeue \n 3.display \n 4.exit ");
	do
	{
		printf("enter ur choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default:
			{
				printf("invalid");
	     	}	
		}
	}
	while(c!=4);
}
