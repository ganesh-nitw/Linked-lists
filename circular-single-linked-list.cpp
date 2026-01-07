//Circular single linked list
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
node* insertpos(node *head,node* &tail,int value,int pos)
{
    node *node1=create(value);
    if(pos==1)
    {
        node1->next=head;
        head=node1;
        tail->next=node1;
        return head;
    }
    node *temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    if(temp->next==head)
    {
        temp->next=node1;
        node1->next=head;
        tail=node1;
        return head;
    }
    node1->next=temp->next;
    temp->next=node1;
    return head;
}
node *deletepos(node *head,node* &tail,int pos)
{
    if(pos==1)
    {
        tail->next=head->next;
        head=head->next;
        return head;
    }
    node* temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    if(temp->next->next==head)
    {
        temp->next=head;
        tail=temp;
        return head;
    }
    temp->next=temp->next->next;
    return head;
}
int main()
{
    node *first=new node();
    node* two=new node();
    node *three=new node();
    node* four=new node();
    node* five=new node();
    first->data=5;
    first->next=two;
    two->data=10;
    two->next=three;
    three->data=15;
    three->next=four;
    four->data=20;
    four->next=five;
    five->data=25;
    five->next=first;
    node* head=new node();
    node* tail=new node();
    head=first;
    tail=five;
    head=insertpos(head,tail,30,5);
    head=deletepos(head,tail,6);
    node *temp=new node();
    temp=head;
    cout<<temp->data<<endl;
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
