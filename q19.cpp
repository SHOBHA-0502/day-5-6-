#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin>> n >> k ;
    int arr[n];
    int count =0;
    int b ;
    
    
    for(int i =0 ; i< n; i++){
        cin>> arr[i];
        if(i!=k){
        count +=arr[i];}
        
        
        
    }
    cin>> b;
    if(count/2 == b){
        cout<<"Bon Appetit";
    }
    else{ cout<< (b- (count/2));}
}
