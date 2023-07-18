//
//  main.cpp
//  checking_if_linked_list_is_sorted
//
//  Created by Uby H on 17/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*last=NULL,*first=NULL;
void create(int x)
{
    struct Node *t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int sort(struct Node *p)
{
    struct Node *q=new Node;
    q=p->next;
    while(q!=NULL)
    {
     if(p->data<=q->data)
     {
         p=p->next;
         q=p->next;
         continue;
     }
        else
            return -1;
    }
    return 0;
}
int main()
{
    int n,x;
    cout<<"Enter the number of element in the linked list : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the linked list : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        create(x);
    }
    cout<<"The linked list elements are given by : "<<endl;
    display(first);
    if(sort(first)==0)
        cout<<"The given function is sorted in ascending order "<<endl;
    else
        cout<<"The given function is not sorted in ascending order "<<endl;
    return 0;
}
