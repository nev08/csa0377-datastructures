#include<stdio.h>
#include<stdlib.h>
int stack[10],c,n,top=-1,i;
void push();
void pop();
void peek();
void display();
	
void push()
       {
			int e;
			printf("enter the element");
			scanf("%d",&e);
			if(top==n-1)
			{
				printf("stack full");
			}
			else
			{
				top=top+1;
				stack[top]=e;
			}
		}
		void pop()
		{
			int e;
			if(top==-1)
			{
				printf("stack empty");
			}
			else
			{
				e=stack[top];
				top=top-1;
				printf("the deleted element %d",e);
			}
		}
		void peek()
		{
			if(top==-1)
			{
				printf("stack empty");
			}
			else
			{
				printf("%d",stack[top]);
			}
		}
		void display()
		{
			int i;
			if(top==-1)
			{
				printf("stack empty");
			}
			else
			{
				for(i=top;i>=0;i--)
				{
					printf("%d  ",stack[i]);
				}
			}
		}
int main()
{
	top=-1;
	printf("enter the size");
	scanf("%d",&n);
	printf("\n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit");
	do
	{
		//printf("\n 1.push \n 2.pop \n 3.peek \n 4.display \n 5.exit");
		printf("enter ur choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:	push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			case 5: exit(0);
			default:
			{
				printf("invalid");
			}	
		}
	}
	while(c!=5);
}
