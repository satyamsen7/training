#include<iostream>
using namespace std;


int reverseNumber(int n) {
    int reversedN = 0;
    while (n != 0) {
        int digit = n % 10;
        reversedN = reversedN * 10 + digit;
        n /= 10;
    }
    return reversedN;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main(){
    int x;
    cout<<"Enter any no : "<<endl;
    cin>>x;

    cout<<isPalindrome(x)<<endl;
    
    
    
    return 0;


}