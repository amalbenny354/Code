#include<stdio.h>

#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

typedef struct node n1;
void diplay();
void in_begin();
void del_begin();
void in_betw();
void del_betw();
void in_end();
void del_end();
n1 *ptr;
n1 *start=NULL;
n1 *prev;
int s;
n1 *create();

void main()
{
	int choice;
	printf("Enter the size of list :");
	scanf("%d",&s);
	int i,n;
	printf("Enter the number of nodes :");
	scanf("%d",&n);
	start=NULL;
	for(i=0;i<n;i++)
	{
		n1 *ptr=create();
		printf("Enter the data %d :",i+1);
		scanf("%d",&ptr->data);
		ptr->link=NULL;
		if(start==NULL)
			start=ptr;
		else
			prev->link=ptr;

			prev=ptr;
	}
	while(1)
	{
		printf("\n1.Display 2.Insert at begining 3.Delete at begining \n4.Insert in between 5.Delete in between 6.Insert at end 7.Delete at end 8.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:diplay();
				break;
			case 2:in_begin();
				break;
			case 3:del_begin();
				break;
			case 4:in_betw();
				break;
			case 5:del_betw();
				break;
			case 6:in_end();
				break;
			case 7:del_end();
				break;
			case 8:exit(0);
				break;
			default:printf("Invalid choice!!!");
		}
	}
}

n1 *create()
{
	n1 *ptr=(n1*)malloc(sizeof(n1));
	if(ptr==NULL)
	{
		printf("overflow");
		return 0;
	}
	else
		return ptr;
}

void diplay()
{
	n1 *temp;
	if(start==NULL)
		printf("List is empty");
		temp=start;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
		printf("NULL \n");
}

void in_begin()
{
	int val;
	n1 *ptr=create();
	printf("Enter the value to be inserted :");
	scanf("%d",&val);
	ptr->data=val;
	if(start==NULL)
	{
		start=ptr;
		ptr->link=NULL;
	}
	else
	{
		ptr->link=start;
		start=ptr;
	}
}

void del_begin()
{
	n1 *temp;
	if(start==NULL)
		printf("List empty");
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}

}

void in_betw()
{
	n1 *temp,*ptr=create();
	int val,pos,i;
	printf("Enter position :");
	scanf("%d",&pos);
	printf("Enter element :");
	scanf("%d",&val);
	ptr->data=val;
	ptr->link=NULL;
	temp=start;
	if(pos==1)
	{
		ptr->link=start;
		start=ptr;
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
		ptr->link=temp->link;
		temp->link=ptr;
	}
}

void del_betw()
{
	n1 *temp;
	int i,pos;
	printf("Enter the position to be deleted :");
	scanf("%d",&pos);
	temp=start;
	if(pos==1)
		start=start->link;
		for(i=1;i<pos;i++)
		{
			prev=temp;
			temp=temp->link;
		}
		prev->link=temp->link;
		free(temp);
}

void in_end()
{
	n1 *temp,*ptr=create();
	int val;
	printf("enter the value to be inserted :");
	scanf("%d",&val);
	ptr->data=val;
	ptr->link=NULL;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=ptr;
}

void del_end()
{
	n1 *temp;
	temp=start;
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
	free(temp);
}	
