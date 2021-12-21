#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , q;
    cin>>n>> q;
    cout<< min(q/2 , (n/2 - q/2));
}