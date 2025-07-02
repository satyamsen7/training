#include<iostream>
#include <cmath> 
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    cout<<"Enter any no : "<<endl;
    cin>>x;

    cout<<isPrime(x)<<endl;
    
    
    
    return 0;


}