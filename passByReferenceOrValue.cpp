#include <iostream>

void passByVal(int x){
    //using this function will mean that the changes inside the function won't affect the original value
    x = 10;
}

void passByRef(int &y){
    //changes within the function will directly affect the original value 
    y = 20;
}

int main(){
    int val1 = 2;
    int val2 = 4;
    //call your functions
    cout << "Value before passByVal: " << val1 << endl;
    passByVal(val1);
    cout << "Value after passByVal: " << val1 << endl;
    
    cout << "Value before passByRef: " << val2 << endl;
    passByRef(val2);
    cout << "Value after passByRef: " << val2 << endl;

    return 0;
}
