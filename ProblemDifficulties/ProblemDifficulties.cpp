#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a[4];
    int t;
    cin>>t;
    while(t){
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    set<int> s(begin(a),end(a));
    if(s.size() == 4)
        cout<<2;
    else if(s.size()==3)
        cout<<2;
    else if(s.size()==2){
        sort(a,a+4);
        
        if(a[0]==a[1]&&a[1]!=a[2])
        cout<<2;
        else
        cout<<1;}
    else
        cout<<0;
    t--;
    cout<<endl;
}
}