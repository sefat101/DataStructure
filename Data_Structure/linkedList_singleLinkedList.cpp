#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
int main()
{
    //creating the head node
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=101;
    head->link=NULL;
    cout<<head->data<<endl;

    //creating current node  and modify the link of header by current node address
    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=5;
    current->link=NULL;
    cout<<current->data<<endl;
    head->link=current;

    //reusing current node and saving this current node address
    current=(struct node *)malloc(sizeof(struct node));
    current->data=193;
    current->link=NULL;
    cout<<current->data<<endl;
    head->link->link=current;





    return 0;
}
