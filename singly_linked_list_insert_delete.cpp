//single linked lists with insertion and deletion
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node* create(int value)
{
    node *node1=new node();
    node1->data=value;
    node1->next=NULL;
    return node1;
}
node* insertpos(node *head,int value,int pos)
{
    node *node2=create(value);
    node *temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    node2->next=temp->next;
    temp->next=node2;
    return head;
}
node* deletepos(node *head,int pos)
{
    node *temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main()
{
    node *first=new node();
    node *two=new node();
    node *three=new node();
    node *four=new node();
    node *head=new node();
    first->data=5;
    first->next=two;
    two->data=10;
    two->next=three;
    three->data=15;
    three->next=four;
    four->data=20;
    four->next=NULL;
    head=first;
    head=insertpos(head,25,3);
    head=deletepos(head,4);
    node *temp=new node();
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
