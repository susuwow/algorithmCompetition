#include<stdlib.h>
#include<iostream>

typedef struct node{
    int id;
    node *next;
}node;


int main(){
    node *head,*p,*now,*prev;
    int n,m;
    head = new node();
    head->id=1;
    now=head;
    scanf("%d %d",&n,&m);
    for(int i=2;i<=n;i++){
        p=new node();
        p->id=i;
        now->next=p;
        now=p;
    }

    now->next=head;
    now=head;
    prev=head;
    while((n--)>1){
        for(int i=1;i<m;i++){
            prev=now;
            now=now->next;
        }
        printf("%d ",now->id);
        prev->next=now->next;
        delete now;
        now=prev->next;
    }
    printf("%d",now->id);
    delete now;

    // for(int i=0;i<n;i++){
    //     printf("%d ",now->id);
    //     now=now->next;
    // }

    return 0;
}