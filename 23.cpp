#include<bits/stdc++.h>
using namespace std ;
int main(){
    int b , n ,m ;
    cin>>b>>n>>m;
    int arr1[n];
    int arr2[m];
    int count =0;
    vector<int> v;
    for(int i =0 ; i<n ; i++){
        cin>>arr1[i];
        
    }
    for(int j =0 ; j<m ; j++){
        cin>>arr2[j];
        
    }
    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            int y = arr1[i]+arr2[j];
            
            if(y<= b){
                v.push_back(y);
                
            }
            
        }
        
    }if(v.size()==0){
        cout<< "-1"<<endl;
    }
    else{
    int max = INT_MIN;
    int ans ;
     for(int i =0 ;i<v.size(); i++){
         if(v[i]>= max){
             max = v[i];
             ans =max;
             
             
         }
     }
     cout<< ans;
    }  
}















