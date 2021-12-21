#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int ,int> m;
    int n ;
    cin>>n;
    int count =0;
    for(int i =0 ; i<n ; i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto pr:m){
        count +=pr.second/2;
        
    }
    cout<< count;
}