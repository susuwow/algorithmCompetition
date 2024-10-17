#include<iostream>
#include<stdlib.h>

const int N=105;

struct node{
    int id;
    int nextId;
    int prevId;
} nodes[N];

int main(){
    int m,n;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=n;i++){
        nodes[i].id=i;
        nodes[i].nextId=i+1;
        nodes[i].prevId=i-1;
    }
    nodes[n].nextId=1;
    nodes[1].prevId=n;

    int now=1,prev=1;

    while(n-->1){
        for(int i=1;i<m;i++){
            prev=now;
            now=nodes[prev].nextId;
        }
        printf("%d ",nodes[now].id);
        int next=nodes[now].nextId;
        nodes[prev].nextId=next;
        nodes[next].prevId=prev;
        now=nodes[prev].nextId;
    }

    printf("%d",nodes[now].id);

    return 0;
}