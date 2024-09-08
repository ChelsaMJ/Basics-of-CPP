#include <iostream>
using namespace std;

int main() {
    int a=10;
    int b=a++; //update later
    cout<<b<<endl;
    cout<<a<<endl;
    int c=++a; //update first
    cout<<c<<endl;
    cout<<a<<endl;
    

    return 0;
}
