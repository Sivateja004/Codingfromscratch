#include<bits/stdc++.h>
using namespace std;
void reversevector(vector<int> v,int n){
    reverse(v.begin(),v.end());
    cout<<"Vector Reversed: ";
    for(auto i:v){
        cout<<i;    
    }
    cout<<endl;
}
void reversearray(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"Array Reversed: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    vector<int> v={1,2,3,4,5,6};
    int arr[]={1,2,3,4,5,6};
    int n=6;
    reversevector(v,n);
    reversearray(arr,n);
    return 0;
}