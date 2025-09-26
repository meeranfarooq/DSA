
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
}
 void display(struct node *head){
     struct node *ptr=head;

while(ptr!=NULL){
    printf("%d->",ptr->data);
ptr=ptr->next;
}
printf("NULL\n");
}
 

 void addatstart(struct node **head,int n){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data at front");
    scanf("%d",&newnode->data);
    newnode->next=*head;
    *head=newnode;
  


    

 }
void addatend( struct node *head,int n){
     struct node *newend=(struct node *)malloc(sizeof(struct node));
    printf("enter data at endnode ");
    scanf("%d",&newend->data);
    newend->next=NULL;
    struct node *ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;

    ptr->next=newend;
    newend->next=NULL;

}
void  addatmiddle(struct node*head,int n){
    int t;
printf("enter the data before the node where you want to add");
scanf("%d",&t);
struct node*ptr=head;
while(ptr!=NULL&&ptr->data!=t){
    ptr=ptr->next;
}
if(ptr==NULL){
    printf("this data is not found %d",t);
    return;
}
struct node *newnode=(struct node *)malloc(sizeof(struct node));
  printf("enter data  ");
scanf("%d",&newnode->data);
newnode->next=ptr->next;
ptr->next=newnode;


}
void delete(struct node*head){
    int k,p;
    struct node*ptr=head;
    printf("enter the data before the node and  that deleting node");
scanf("%d%d",&k,&p);
while(ptr!=NULL&&ptr->data!=k){
    ptr=ptr->next;
}
if(ptr==NULL){
    printf("this data is not found %d",k);
    return;
}
if(ptr->next->data==p){
    
struct node*dn=ptr->next;
ptr->next=(*dn).next;

}
}
int main(){
    struct node *head=NULL,*temp;
int n;
printf("enter how many nodes you want ");
scanf("%d",&n);
    createlink(&head,&temp,n);
    display(head);
    addatstart(&head,n);
    display(head);
    addatend(head,n);
    display(head);
    addatmiddle(head,n);
    display(head);
    delete(head);
    display(head);
    return 0;
}
