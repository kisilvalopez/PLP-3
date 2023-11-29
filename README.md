# PLP-3

## Loops in C++
While Loop
- While loops continue as long as the specified condition is true. Initialization and update steps are coded outside of the loop
```
int i = 0;
while (i < 5){
++i;
}

```
For Loop
- For loops will continue to execute as long as the condition is true.
```
for (int i = 0; i < 5; ++i) {
   	 // Code to be executed in each iteration
}

```
do-while loop
- The do-while loop is similar to the while loop but it makes sure that the loop body is executed at least once before checking the loop condition
```
do{
//insert the code that you desire to be executed for each iteration
//update the condition
} while(condition);

```

## Function Syntax
Function declaration tells the compiler about a group of statements within a function. It tell the compiler the function name, what it returns, and any parameters that are within that function. 

The general syntax would look like this:
```
return_type function_name(parameters){
	//body of the function
}
```
## Function Rules
There are no rules in C++ about function placement. C++ allows a function to be placed anywhere in the code file and the order in which these functions appear won’t necessarily determine how each function is executed. Although it’s important to define a function before they are called so that you don’t receive any compiler warnings and the compiler knows about the functions before executing them. 

## Recursive Functions
C++ does support recursive functions. A recursive function is a function that calls itself repeatedly until a certain condition is met. 

## Parameters
Functions in C++ can accept multiple parameters. You can define parameters as char, int, double, or other data types. Because you can declare each parameter independently, you don’t necessarily need to use the same data type for all but they must be specified.

The general syntax for this would:
```
return_type function_name (type1 parameter1, type2 parameter2…){
	//function body
}
```

## Returning Multiple Values
C++ does not directly allow us to return multiple values at the same time but programing allows us to do so by using pointers, using structures, and using arrays. 

Pointers
- Using pointers, we pass the argument with their address and make changes to their values by using pointers so that the values are changed.

Structures
- Using structures, it is a user-defined datatype that will use two integer values and store the greater and smaller values into those variables and then use them. 

Arrays
- Using arrays only works when returned values are of the same type. When an array is passed as an argument, the base address is passed to the function and any changes made to the copy of the array, it’ll change the value of the original array. 

## Pass-By-Reference? Pass-By-Value?
C++ supports pass-by-reference and pass-by-value. 

**Pass by reference**

References in C++ is used when you pass a variable by reference in a function to the original variable and any changes that are being made to the parameter that’s inside the function will directly change the original variable value.

**Pass by value**

The function receives a copy of the variable when a variable is passed to a function in C++. Any changes that are made to the parameter inside of the function will not change the original value outside of the function.

## Storing Arguments, Parameters, and Local Variables

Arguments

Arguments are passed to a function and stored by value or by reference. By value they are copied into the functions parameters space on the stack. By reference the address of the variable is passed which allows the function to access the original data of the variable.
```
void exampleFunction(int arg) {
    // 'arg' is a copy of the original value
}
```
```
void exampleFunctionByReference(int& arg) {
    // 'arg' is a reference to the original value
}
```
Parameters

Parameters are stored on a stack. Once a function is called, the values of the arguments are passed to the function and space is allocated for the parameters on the stack.
```
void function(int parameter){
	//parameter is now stored on the stack
}
```

Local Variables

Local variables are stored on a stack. Once a function is called, space can be allocated for local variables, these are declared within the function body.
```
void function(){
	Int localVar; //localVar is stores on the stack
}
```

Dynamically Allocated Variable

Variables that are created with dynamic memory allocation using ‘new’ or ‘malloc’ will be stored in the heap. 
```
int* dynamicAllocVar = new int; //stored in heap
```
## Scoping Rules

The scoping rules in C++ determines the extent of a program code and which variables can be accessed, declared, or worked with. 

Local Scope

These are variables declared within a code block that have a local scope and are only visible within that specific block.
```
void exampleFunction() {
    int localVar; // Local variable
    // ...
} // localVar's lifetime ends here
```

Function Scope

Variables with a function scope are visible throughout the entire function.

Glocal Scope

These are variables that are declared outside of a function or class are within the Global Scope. They’re visible throughout the entire program and their lifetime ends at the end of the program. 

Block Scope

Variables that were declared in a loop or conditional block fall within the Block Scope. With each iteration of a loop, a new scope for the variable is created within the loop body and their lifetime ends once the loop has finished executing. 

## Side Effects in C++
Side effects is when there is an observable behavior of a function or expression other than its return value, such as taking input or generating a different output or changing the value of variables. Side effects are possible in C++ and there aren’t inherent guard rails against them, because C++ allows functional and imperative programming styles, there’s a flexibility in designing functions or operations that can ultimately lead to side effects in the program.

Some methods to lessen the chance of side effects:
- Create pure functions that only depend on its input parameters and will produce an output that doesn’t modify the external state.
- Immutability by avoiding modifying variables when possible.
- Local Scoping by limiting the scope of variables to minimize their visibility. It’s also encouraged that users use local variables whenever appropriate.
- Minimize the use of Global variables so that variables can’t be modified by multiple functions.






