int factorialLN(int n) {  
    int fact = 1;  
    for(int i=1; i<=n; i++) {  
        fact *= i;  
    }  
    return fact;  
}  

int main() {  
    cout << factorialLN(4) << endl;  
    cout << factorialLN(5) << endl;  
    return 0;  
}
