#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
    int max=INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
    return secondmax;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondlargest(arr,n);
}