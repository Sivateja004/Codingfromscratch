#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    if(n==2) return true;//since 2 is prime
    if(n<=1 or n%2==0) return false;//eliminate values less than or equal to 1 and even numbers except 2
    for(int i=3;i<=sqrt(n);i+=2){//square root optimization
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    //cout<<checkprime(29);//only to check prime or not
    //print upto n primes
    int n=2;//prime numbers starting from 2
    int range,count=0;
    cin>>range;
    while(count<range){
        if(checkprime(n)){
            cout<<n<<" ";
            count+=1;
        }
        n+=1;
    }
}