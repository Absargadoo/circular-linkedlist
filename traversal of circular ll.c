#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//traversal 
void createlinkedlist(struct Node *head )
{
    struct Node *ptr=head;
    do
    {
      printf("element is: %d\n", ptr->data);
    ptr = ptr->next;
    }

    while(ptr!=head);
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth; 


    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;

    third->data=9;
    third->next=forth;

    forth->data=10;
    forth->next=head;
    printf("circular linked list is\n");
    createlinkedlist(head);
    

    return 0;
}