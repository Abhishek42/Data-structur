#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node * head){
    while(head!=NULL){
        printf("%d",head->data);
        head=head->next;
    }
}

void main(){
    int n,i=0;
    struct node * head;

    printf("Enter size of list");
    scanf(" %d ",&n);
    head=(struct node*) malloc(n*sizeof(struct node));
    printf("%d",head);

    for(;head!=NULL;i++){
        printf("%d",head->data);
        head=head->next;
    }
    for(;i<=n;i++){
        scanf("%d",head->data);
        head=head->next;
    }

    traversal(head);

}