#include<bits/stdc++.h>
using namespace std;

int LargestElement(int n, int arr[]) {
    int max=arr[n-1];

    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
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
    cout<<"Largest Element :"<<LargestElement(n,a);
}
// https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/ //
