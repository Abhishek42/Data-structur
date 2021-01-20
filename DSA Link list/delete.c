#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

//  Lisk list display function / traveral function

void traversal(struct node* ptr){
      while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}

// Delete at the first elemet in linked list finction
struct node * Delete_At_First(struct node * head){
  struct node * p;
  
  p=head;
  head=head->next;
  free(p);

  return head;
}

// Delete at the End Elemets in linked list Function
struct node * Delete_At_End(struct node *head){
  struct node *p=head, *q=head->next;

  while(q->next!=NULL){
    p=p->next;
    q=q->next;
  }
    p=p->next=NULL;
    free(q);

 return head;
}


// Delete at the Index elements in liked list function
struct node * Delete_At_Index(struct node * head ,int index){
  struct node *p=head;
  struct node *q=head->next;
  

  for(int i=0; i<index-2; i++){
    p=p->next;
    q=q->next;
    }
  p->next=q->next;
  free(q);

  return head;
}

void Boder(){
  printf("\n");
for(int i=0; i<50; i++){
  printf("%c",176);
  if(i==25){
    printf("[ Menu ]");
  }
}
}
void Bode2(){
  printf("\n");
for(int i=0; i<50; i++){
  printf("%c",176);
  }
}
void main()
{
  int button,num;
  struct node * first=(struct node *)malloc(sizeof(struct node));
  struct node *secand=(struct node *)malloc(sizeof(struct node));
  struct node * third=(struct node *)malloc(sizeof(struct node));
  struct node *fourth=(struct node *)malloc(sizeof(struct node));
  struct node * fifth=(struct node *)malloc(sizeof(struct node));
  struct node * head = first;

    system("cls");

    first->data=10;
    first->next=secand;

    secand->data=20;
    secand->next=third;
    
    third->data=30;
    third->next=fourth;
    
    fourth->data=40;
    fourth->next=fifth;
    
    fifth->data=50;
    fifth->next=NULL;

Boder();
printf("\nList Traversal[1]");
printf("\nDelete At First[2]");
printf("\nDelete At End[3]");
printf("\nDelete At Index[4]\n");
printf("Exit prese[0]");

printf("\n Enter your Choice: ");
scanf("%d",&button);

  switch(button){

    case 1:
    printf("------------- [ Your List Traversal] --------------------\n");
      traversal(head);
      break;

    case 2:
    printf("------------- [ Your List Traversal] --------------------\n");
    traversal(head);
    printf("\n----------------[ Delete At First ]------------------\n");
      head=Delete_At_First(head);
      traversal(head);
      break;

    case 3:
    printf("------------- [ Your List Traversal] --------------------\n");
    traversal(head);
    printf("\n----------------[ Delete At End ]------------------\n");
      head=Delete_At_End(head);
      traversal(head);
      break;

    case 4:
    printf("------------- [ Your List Traversal] --------------------\n");
    traversal(head);
    printf("\n----------------[ Delete At Index ]------------------\n");
    printf("Enter the Index: ");
    scanf("%d",&num);
      head=Delete_At_Index(head,num);
      traversal(head);
      break;
    case 0:
      exit(0);
    default:
      printf("This type number not abalevle");
      break;
  }
Bode2();
    getch();
}