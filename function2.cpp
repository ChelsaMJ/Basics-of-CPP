#include <iostream>  
using namespace std;  

//function definition  
int printHello() {  
    cout << "hello\n";  
    return 3;  //now returntype is int
}  

int main() {  
    //function call / invoke  
    int val = printHello();  //prints hello once and then 3 is stored in val
    cout << "val = " << val << endl;  

    return 0;  
}
