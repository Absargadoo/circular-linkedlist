#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//insertion
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
//insert
struct Node * insertatfirst(struct Node * head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data; 

    struct Node * p =head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    //at this point p poits to the last node of this limked list
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;

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
    head=insertatfirst(head,80);
    createlinkedlist(head);
    

    return 0;
}