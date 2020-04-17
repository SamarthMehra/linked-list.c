# linked-list.c
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void create()
{
    struct node *temp;
    int i,n;
    printf("Enter the size of linked list:");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(i=0;i<n-1;i++)
    {
        printf("Enter data for node %d:",i+1);
        scanf("%d",&temp->data);
        temp->link=(struct node*)malloc(sizeof(struct node));
        temp=temp->link;
    }
    printf("Enter data for node %d:",i+1);
    scanf("%d",&temp->data);
    temp->link=NULL;
}
void Ins_Beg()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
        printf("Memory not allocated");
    else
    {
        printf("Enter data to insert at the beginning:");
        scanf("%d",&temp->data);
        temp->link=head;
        head=temp;
    }
}
void Ins_End()
{
    struct node*temp,*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Can't allocate memory:");
    else
    {
        printf("Enter data to insert at the end:");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        temp=head;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=newnode;
    }
    newnode->link=NULL;
}
void Insert()
{
    int i,k;
    struct node *temp,*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else
    {
        printf("Enter the node at which data is to be inserted:");
        scanf("%d",&k);
        printf("Enter data:");
        scanf("%d",&(newnode->data));
        newnode->link=NULL;
        temp=head;
        for(int i=0;i<k-2;i++)
        {
            temp=temp->link;
            if(temp->link==NULL)
                break;
        }
        if(temp!=NULL)
        {
        newnode->link=temp->link;
        temp->link=newnode;
        }
        else printf("Unable to insert data.");
    }
}
void Del_Beg()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	temp=temp->link;
	free(temp);
}
void Del_End()
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	while(temp->link!=NULL)
		temp=temp->link;
	temp=temp->link;
	free(temp);
}
void Delete()
{
	int k;
	struct node *temp,del_node=(struct node*)malloc(sizeof(struct node));
	if(delnode==NULL)
		printf("Memory not allocated");
	else
	{
		printf("Enter the node which is to be deleted:");
		scanf("%d",&k);
		for(i=0;i<k-2;i++)
			temp=temp->link;
		del_node=temp->link;
		temp=temp->link->link;
		del-node->link=NULL;
		free(del_node);
	}
}
void Printlist()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
    printf("%d  ",temp->data);
    temp=temp->link;
    }
    printf("\n");
}
int main()
{
    create();Ins_Beg();Printlist();Ins_End();Printlist();
    Insert();Printlist();Del_Beg();Printlist();
}
