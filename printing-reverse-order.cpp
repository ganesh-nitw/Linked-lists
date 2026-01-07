//printing reverse order by recursions
#include<iostream>
using namespace std;
class node
{
public:
int data;
node *next;	
};
void printreverse(node* head)
{
    if(head==NULL)
    {
        return;
    }
    printreverse(head->next);
    cout<<head->data<<" ";
}
int main(){
	
	node *first= new node();
	node *two= new node();
	node *three= new node();
	node *four= new node();
	node *five= new node();
	node *temp= new node();
	node *head= new node();
	
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
	head=first;
	temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	printreverse(head);
	return 0;
}
