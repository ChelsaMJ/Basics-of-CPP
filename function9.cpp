#include <iostream>  
using namespace std;  
//145=1+4+5

int sumOfDigits(int num) {  
    int digSum = 0;  

    while(num > 0) {  
        int lastDig = num % 10;  
        num /= 10;  

        digSum += lastDig;  
    }  
    return digSum;  
}  

int main() {  
    return 0;  
}
