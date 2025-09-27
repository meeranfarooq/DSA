#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *next;
};
void createlink( struct node **head,struct node **temp,int n){
for(int i=0;i<n;i++){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the no in data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(i==0){
    *temp=newnode;
    *head=newnode;
}
else{
    (*temp)->next=newnode;
    (*temp)=newnode;
    (*temp)->next=NULL;
}
}
(*temp)->next=*head;
}
 void display(struct node *head){
struct node *ptr=head;


printf("%d->",ptr->data);
ptr=ptr->next;

while(ptr!=head){
printf("%d->",ptr->data);
ptr=ptr->next;
}
printf("%d(head)",ptr->data);

}

int main(){
    struct node *head=NULL,*temp;
int n;
int f;
printf("enter how many nodes you want ");
scanf("%d",&n);
    createlink(&head,&temp,n);
    display(head);
 return 0;
}
 
