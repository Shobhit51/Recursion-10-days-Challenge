#include<iostream>
using namespace std;

int twopower(int n){
    if(n==1){
        return 2;
    }

    return 2 * twopower(n-1);
}

int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout << twopower(n) << " "<<endl;
    return 0;
}