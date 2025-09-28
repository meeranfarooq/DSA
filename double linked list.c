
#include<stdio.h>
 #include<stdlib.h>
     struct node{
        struct node *prev;
        int data;
       struct node *next;
};


void createlink(struct node **headn,struct node **headp,struct node **temp){
int n;
printf("enter the how many nodes\t");
scanf("%d",&n);
for(int i=0;i<n;i++){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data at node %d\t",i+1);
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;
if(i==0){
    *headn=newnode;
    *temp=newnode;
      
}
else{
    (*temp)->next=newnode;
     newnode->prev=*temp;
     *temp=newnode;
    (*temp)->next=NULL;
}


}
*headp=*temp;
}

void display1(struct node*headn){
    struct node*ptr=headn;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
void display2(struct node*headp){
    struct node*ptr=headp;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->prev;
    }
    printf("NULL\n");
}

int main(){

    struct node *headn=NULL,*headp=NULL,*temp;

createlink(&headn,&headp,&temp);
printf("Forward traversal:\n");
display1(headn);
printf("Backward traversal:\n");
display2(headp);


return 0;
}
