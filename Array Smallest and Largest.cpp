#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n){
   int min=INT_MAX;
   for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
   }
   return min;
}
int stlsmallest(int arr[],int n){
    return *min_element(arr,arr+n);
}
int largest(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int stllargest(int arr[],int n){
    return *max_element(arr,arr+n);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<smallest(arr,n)<<endl;  //1
    cout<<stlsmallest(arr,n)<<endl;   //1
    cout<<largest(arr,n)<<endl;  //5
    cout<<stllargest(arr,n);
}