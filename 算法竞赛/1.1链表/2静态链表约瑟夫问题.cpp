#include<stdlib.h>
#include<iostream>

const int N=105;

struct node{
    int id;
    int nextId;
}nodes[N];

int main(){
    int m,n;
    scanf("%d %d",&n,&m);

    nodes[0].nextId=1;

    for(int i=1;i<=n;i++){
        nodes[i].id=i;
        nodes[i].nextId=i+1;
    }
    nodes[n].nextId=1;

    int now=1,prev=1;
    while((n--)>1){
        for(int i=1;i<m;i++){
            prev=now;
            now=nodes[prev].nextId;
        }
        printf("%d ",nodes[now].id);
        nodes[prev].nextId=nodes[now].nextId;
        now=nodes[prev].nextId;
    }

    printf("%d",nodes[now].nextId);
    return 0;

}