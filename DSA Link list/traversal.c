#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

void Treaversal(struct node* head){
    for(;head!=NULL;)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}

void main(){
struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *first=(struct node*)malloc(sizeof(struct node));
struct node *secand=(struct node*)malloc(sizeof(struct node));
struct node *third=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=first;

first->data=20;
first->next=secand;

secand->data=30;
secand->next=third;

third->data=40;
third->next=NULL;

Treaversal(head);
getch();

}