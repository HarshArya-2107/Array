#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int c0=0,c1=0,c2=0;
    
    for(int i=0;i<n;i++) {
        if(a[i]==0) 
            c0++;
        
        else if(a[i]==1)
            c1++;
        
        else  c2++;
    }
    for(int i=0;i<c0;i++)
    a[i]=0;
    
    for(int i=c0;i<c0+c1;i++)
    a[i]=1;
     
    while(c2--) {
        a[i++]=2;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1 //
