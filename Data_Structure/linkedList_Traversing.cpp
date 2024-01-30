#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};

//this function is used to travers through the single linkedlist
//at first we assured that if head nodes link is equal null or not ny pointing it (head->link)
//ptr=ptr->link means after every loop the ptr is pointing the link of the next node

void atTheEnds(struct node *head,int newValue){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=newValue;
    temp->link=NULL;
    while(ptr->link!=NULL){
        //going at the end of the linkedList and after the loop end ptr will point
        //the address of last node
        ptr=ptr->link;
    }
    //joining the new node with the old one
        ptr->link=temp;
    //printing the new added nodes value
        cout<<ptr->link->data<<endl;
}



int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;
    cout<<head->data<<endl;


    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=2;
    current->link=NULL;
    cout<<current->data<<endl;
   head->link=current;

    current=(struct node *)malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    cout<<current->data<<endl;
    head->link->link=current;
    //creating a data for new node
    int data=4;
    atTheEnds(head,data);




    return 0;
}
