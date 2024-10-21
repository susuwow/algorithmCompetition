#include<iostream>
#include<list>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    list<int> l;
    for(int i=1;i<=n;i++){
        l.push_back(i);
    }

    list<int>::iterator it=l.begin();

    while(l.size()>1){
        for(int i=1;i<m;i++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }
        }
        printf("%d ",*it);

        list<int>::iterator temp=it++;
        l.erase(temp);

        if(it==l.end()){
            it=l.begin();
        }
    }
    printf("%d \n",*it);

}