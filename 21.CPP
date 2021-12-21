#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int arr[3];
      for(int i =0 ;i<3 ; i++){
          cin>>arr[i];
      }
      if(abs(arr[2]-arr[0]) > abs(arr[2]-arr[1])){
          cout<<"Cat B"<<endl;
      }
      else if(abs(arr[2]-arr[0]) < abs(arr[2]-arr[1])){
          cout<<"Cat A"<<endl;
      }  
      else {
          cout<<"Mouse C"<<endl;
      }
        }
return 0;
}