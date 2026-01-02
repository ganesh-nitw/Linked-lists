//Double linked lists
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
};
int main()
{
    node *first=new node();
    node *two=new node();
    node *three=new node();
    node *four=new node();
    node *five=new node();
    node *head=new node();
    node *tail=new node();
    node *temp=new node();
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
    temp=head;
    rtemp=tail;
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
