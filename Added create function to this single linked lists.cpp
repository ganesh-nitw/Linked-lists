//Single linked lists with create function
#include<iostream>
using namespace std;
struct node
{

int data;
struct node *next;	
};

struct node* create(int value)
{
	struct node *node1;
	node1->data=value;
	node1->next=NULL;
	return node1;
}

int main(){
	
	struct node *first= new node();
	struct node *two= new node();
	struct node *three= new node();
	struct node *four= new node();
	struct node *five= new node();
	struct node *temp= new node();
	struct node *head= new node();
	struct node *six= new node();

six=create(30);
	
	first->data=5;
	first->next=two;
	two->data=10;
	two->next=three;
	three->data=15;
	three->next=four;
	four->data=20;
	four->next=five;
	five->data=25;
	five->next=NULL;
	//head=first;
//	six->next
	temp=first;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
	return 0;
}
