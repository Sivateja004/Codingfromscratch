#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        // your code goes here
        long long n;
        long long even=0,odd=0;
        cin>>n;
        vector<int> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        for(long long i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
            }
        long long r1=even*(even-1)/2;
        long long r2=odd*(odd-1)/2;
        long long res=r1+r2;
        cout<<res<<endl;
    }
}
