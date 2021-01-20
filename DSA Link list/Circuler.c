#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
};

void border(int n){
    for(int i=0; i<5+n; i++){
        printf("%c",176);
    }
    printf("\n");
}

// Circular link list traversal
void traversal(struct node * head){
    struct node* temp=(struct node *)malloc(sizeof(struct node));
    temp=head;
    do{
        printf("%d \n",temp->data);
        temp=temp->next;
    }while(temp->next!=head);
}

// Insert at first in linked list
struct node * Insert_At_First(struct node * head, int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head->next;
    ptr->data=data;

    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

struct node * Insert_At_end(struct node *head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head->next;

    ptr->data=data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}

void main()
{
    system("cls");
struct node *head;
struct node *first;
struct node *secand;
struct node *third;
struct node *fourth;

head = (struct node *)malloc(sizeof(struct node));
first = (struct node *)malloc(sizeof(struct node));
secand = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
fourth = (struct node *)malloc(sizeof(struct node));

head->data=10;
head->next=first;

first->data=20;
first->next=secand;

secand->data=30;
secand->next=third;

third->data=40;
third->next=fourth;

fourth->data=50;
fourth->next=head;

border(30);
printf("befort insertion:\n");
traversal(head);

border(30);
printf("after insertion:\n");
head=Insert_At_First(head,5);
traversal(head);
border(30);

head=Insert_At_end(head,1);
traversal(head);

getch();
}