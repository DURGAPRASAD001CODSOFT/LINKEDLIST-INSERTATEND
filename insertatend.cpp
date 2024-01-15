#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data=value;
        next = NULL;

    }
};

int main()
{
    node *head=NULL;
    node *tail = NULL;
    int arr[]={2,4,6,8,10};

    //insert the value at end

    for(int i=0;i<5;i++)
    {
    //linked list empty
    if(head==NULL)
    {
        head=new node(arr[i]);
        tail=head;
    }
    //linked list exist
    else
    {
        tail->next=new node(arr[i]);
        tail=tail->next;
    }
    }

    node *temp;
    temp = head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}