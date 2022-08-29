#include<bits/stdc++.h>
using namespace std;

void reverse( int a[],int l,int r){
    if(l>=r){
        return ;
    }

    swap(a[l],a[r]);
    reverse(a,l+1,r-1);
}

int main(){
    int a[5]={1,2,3,4,5};
    // cout<<"Enter the array"<<endl;
    // for(int i=0;i<5;i++){
    //    cin>>a[i];
    // }

    reverse(a,0,5);
    
    for(int i=0;i<5;i++){
       cout<<a[i];
    }
    return 0;
}