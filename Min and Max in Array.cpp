#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = a[0];
    int max = a[n-1];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    } cout<<"minimum is : "<<min<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Maximum is : "<<max;
}
//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/ //
