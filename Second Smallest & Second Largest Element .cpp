
#include<iostream>
using namespace std;

int Small(int n, int arr[]){
    int min=arr[1];
    
    for(int i=0;i<n;i++) {
        if(min>arr[i]) {
            min=arr[i];
        }
    }
    return min;
}
int Large(int n, int arr[]){
    int max = arr[n-2];
    
    for(int i=0;i<n;i++){
        if(max<arr[i]) {
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Second Smallest : "<<Small(n,a)<<endl;
    cout<<"Second Largest  : "<<Large(n,a);
}
//https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/ //
