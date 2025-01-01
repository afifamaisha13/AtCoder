#include<bits/stdc++.h>
using namespace std;
int main(){
    
    set<int>s;
    int x;
    for(int i=0;i<4;i++){
    cin>>x;
    s.insert(x);
    
}
    if(s.size()==2)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
}
