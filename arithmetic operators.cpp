#include <iostream>
using namespace std;

int main() {
    int a=10,b=2;
    
    cout<< (a+b)<<endl;
    cout<< (a-b)<<endl;
    cout<< (a*b)<<endl;
    cout<< (a/b)<<endl;
    cout<< (a%b)<<endl;
    cout<< (5/2)<<endl; //int/int=int
  //int/float, also:
  //double/int -->takes double --> bigger datatype
    cout<< (5/(double)2)<<endl; //typecasted 2 to double //float value
  int ans =(5/(double)2);
  cout<< ans<<endl; //int value
  
  
    

    return 0;
}
