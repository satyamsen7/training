#include<iostream>
#include<cmath> 
using namespace std;

bool isArmstrong(int n) {
    int originalN = n;
    int sum = 0;
    int numDigits = 0;
    int tempN = n;
    while (tempN != 0) {
        tempN /= 10;
        numDigits++;
    }
    tempN = n;
    while (tempN != 0) {
        int digit = tempN % 10;
        sum += pow(digit, numDigits);
        tempN /= 10;
    }
    return sum == originalN;
}

int main(){
    int x;
    cout<<"Enter any no : "<<endl;
    cin>>x;

    cout<<isArmstrong(x)<<endl;
    
    
    
    return 0;


}