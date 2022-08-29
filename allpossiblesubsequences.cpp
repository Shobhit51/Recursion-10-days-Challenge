#include<iostream>
#include<vector>
using namespace std;

void helper(string s,string temp,int index){
    if(s.size()==index){
        cout<<temp<<" ";
        return;
    }

    helper(s,temp+s[index],index+1);
    helper(s,temp,index+1);

}

vector<string>Allpossible(string s){
    vector<string>ans;
    helper(s," ",0);
    return ans;
}

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    Allpossible(s); 
    return 0;
}