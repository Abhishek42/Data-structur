#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void taversal(struct node * ptr){
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node * insertAtFirst(struct node *head,int data1){
    struct node *newhead;
    newhead->data=data1;
    newhead->next=head;
    return newhead;
}

void main(){
    int num;
    struct node * newhead;
    struct node * head= (struct node *) malloc(sizeof( struct node ));
    struct node * first= (struct node * ) malloc(sizeof( struct node ));
    struct node * secand= (struct node * ) malloc(sizeof(struct node ));
    struct node * third= (struct node * ) malloc(sizeof( struct node ));
    struct node * fourth= (struct node * ) malloc(sizeof( struct node ));

    head->data= 10;
    first->data= 20;
    secand->data= 30;
    third->data= 40;
    fourth->data= 50;

    head->next=first;
    first->next=secand;
    secand->next=third;
    third->next=fourth;
    fourth->next=NULL;

    taversal(head);

    printf("-------------------------------------\n");
    printf("enter the number: ");
    scanf("%d",&num);
    newhead=insertAtFirst(head,num);
    taversal(newhead);

getch();
}