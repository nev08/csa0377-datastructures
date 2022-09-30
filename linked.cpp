#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;

void create()
{
	int x,n,i;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next)
			{
				p->next=newnode;
				p=newnode;
			}
		}
	}
	
}
void insert_begin()
{
	int x;
	printf("enter the value");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}
void insert_end()
{
	int x;
	printf("enter the value");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next)
	{
		p->next=newnode;
		p=newnode;
	}
	
}
void insert_at_n()
{
	int i,pos,x;
	printf("enter the value and position");
	scanf("%d%d",&x,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	{
		t=p;
		t->next=newnode;
		newnode->next=p;
		p=newnode;
	}
	
}

void del_begin()
{
	int x;
	p=head;
	head=p->next;
	x=p->data;
	free(p);
	printf("the deleted element%d",x);
}
void del_end()
{
	int x;
	for(p=head;p->next!=NULL;p=p->next)
	{
		t=p;
		t->next=NULL;
		x=p->data;
		free(p);
		printf("the deleted element%d",x);
	}
}
void del_at_n()
{
	int x,pos,i;
	printf("enter the position");
	scanf("%d",&pos);
	for(i=1,p=head;i<pos;i++,p=p->next)
	{
		t=p;
		t->next=p->next;
		x=p->data;
		free(p);
		printf("the deleted element is%d",x);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("empty\n");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		{
			printf("%d->",p->data);
		}
	}
}
int main()
{
	int choice;
	do
	{
		printf("main menu\n");
		printf("\n1.create\n2.display\n3.insert begin\n4.insert end\n5.insert at n\n6.delete at begin\n7.delete at end\n8.delete at any position\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insert_begin();
				break;
			case 4:
				insert_end();
				break;
			case 5:
				insert_at_n();
				break;
			case 6:
				del_begin();
				break;
			case 7:
				del_end();
				break;
			case 8:
				del_at_n();
				break;
			case 9:
				exit(0);
			default:
				printf("enter numbers from 1 to 9 ");
		}
	}while (choice>0 && choice<=9);
	return 0;
}
