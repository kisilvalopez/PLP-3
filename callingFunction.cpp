#include <iostream>

//create a function, here we will use a simple one, one that adds two variables
int add (int a, int b){
    return a + b;
}
//create another function where two variables will divide
float divide(float x, float y){
    return x/y;
}

int main(){
    //we save the results of these functions by inputting our desired variables
    int result1 = add(5,2);
    //calling our division function and saving the results in our new variables
    float result2 = divide(4,2);
    //displaying the output of these functions by calling them
    cout << "Result of the add function: " << result1 << endl;
    cout << "Result of the division function: " << result2 << endl;
    return 0;
}
