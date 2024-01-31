#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

// Function to add a new node with given data at the beginning of the linked list
struct node* addAtFirst(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    // Set the link of the new node to the current head
    ptr->link = head;

    // Update the head to point to the new node
    head = ptr;

    return head;
}

int main() {
    // Creating the initial linked list with two nodes
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;

    // Linking the initial nodes
    head->link = ptr;

    // Adding a new node with data 3 at the beginning of the linked list
    int data = 3;
    head = addAtFirst(head, data);

    // Traversing and printing the linked list
    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }

    return 0;
}
