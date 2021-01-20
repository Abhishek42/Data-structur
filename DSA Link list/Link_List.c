#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};


void  main()
{
    // system("cls");
    char c;
    int i=0,j=0;
    int button;

    for(i=0; i<50; i++){
        if(i==25){
            printf(" Menu ");
        }
        else{
        printf("%c",176);
        }
        c+=i;
    }

printf("\n");

printf("Create Link list [1]\n");
printf("Delete Node [2]\n");
printf("Insert At First [3]\n");
printf("Insert At Last [4]\n");
printf("Insert At Index [5]\n");
printf("Exit [6]\n");
printf("enter your Choice: ");
scanf("%d",&button);

switch(button){

// case 1:

// case 2:

// case 3:

// case 4:

// case 5:

case 6:
    exit(0);

}

struct node *head;
struct node *first =(struct node*)malloc(sizeof (struct node));
struct node *secand =(struct node*)malloc(sizeof (struct node));
struct node *third =(struct node*)malloc(sizeof (struct node));
struct node *fourth =(struct node*)malloc(sizeof (struct node));

first->data=10;
first->next=secand;

secand->data=20;
secand->next=third;

third->data=30;
third->next=fourth;

fourth->data=40;
fourth->next=NULL;

getch();

}