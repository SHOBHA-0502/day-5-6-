#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ; 
    map<int,int>m;
    for(int i =0 ; i<n ;i++){
      int x; 
     cin>>x;
     m[x]++;
    }
    int ans =0 , max = INT_MIN;
    for(auto i:m){
        if(i.second>max){
            ans =i.first;
            max= i.second;
        }

    }
}