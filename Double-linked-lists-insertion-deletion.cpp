//Double linked lists with insertion and deletion
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
};
node *create(int value)
{
    node *node1=new node();
    node1->data=value;
    node1->next=NULL;
    node1->prev=NULL;
    return node1;
}
node *insertpos(node *head,node* &tail,int value,int pos)
{
    node *node2=create(value);
    if(pos==1)
    {
        node2->next=head;
        head->prev=node2;
        return node2;
    }
    node *temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        tail=node2;
        temp->next=node2;
        node2->prev=temp;
        return head;
    }
    node2->next=temp->next;
    node2->prev=temp;
    temp->next->prev=node2;
    temp->next=node2;
    return head;
}
node *deletepos(node *head,node* &tail,int pos)
{
    if(pos==1)
    {
        head->next->prev=NULL;
        head=head->next;
        return head;
    }
    node *temp=new node();
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    if(temp->next->next==NULL)
    {
        temp->next=NULL;
        tail=temp;
        return head;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
    return head;
}
int main()
{
    node *first=new node();
    node *two=new node();
    node *three=new node();
    node *four=new node();
    node *five=new node();
    node *head=new node();
    node *tail=new node();
    node *rtemp=new node();
    first->data=5;
    first->prev=NULL;
    first->next=two;
    two->data=10;
    two->prev=first;
    two->next=three;
    three->data=15;
    three->prev=two;
    three->next=four;
    four->data=20;
    four->prev=three;
    four->next=five;
    five->data=25;
    five->prev=four;
    five->next=NULL;
    head=first;
    tail=five;
    head=insertpos(head,tail,30,1);
    head=deletepos(head,tail,6);
    node *temp=new node();
    rtemp=tail;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(rtemp!=NULL)
    {
        cout<<rtemp->data<<endl;
        rtemp=rtemp->prev;
    }
}
