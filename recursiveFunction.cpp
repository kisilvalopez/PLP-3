#include <iostream>

int factorial(int n){
    //base case: factorial of 0 is 1
    if (n ==0 || n ==1) {
        return 1;
    } else {
        return n * factorial(n - 1); 
    }
}

int main(){
    int num = 5; 
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
