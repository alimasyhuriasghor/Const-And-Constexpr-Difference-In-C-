#include <iostream>

#define PRINT(x) std::cout << "The value is: " << x << std::endl

// Function constant expression must be declared with constexpr not const the reason why a function needed to declared as constexpr is because to evaluate or calculate the result to Compilation Time NOT DURING RUNTIME 

// Note that using constant parameter isn't really necessary the reason i am using it just to tell the programmer that the value cannot be changed.and by the way without using "const" it will still a Compile Time Constant
constexpr int facotrial(const int facotrial_number) {
    return facotrial_number == 1 ? 1 : facotrial_number * facotrial(facotrial_number - 1); // <- this is a recursion constant expression function and the value can be known during compilation time.recursion function is a function that calls it self
}

// Note that using constant parameter isn't really necessary the reason i am using it just to tell the programmer that the value cannot be changed.and by the way without using "const" it will still a Compile Time Constant
constexpr int sum(const int x, const int y) {
    return x + y;
}

int main(int argc, char const *argv[])
{
    // Constant expression is an expression that can be evaluated during compilation time.to be a constant expression all the values must be constant and known by the compiler at compilation time

    // Runtime constants are whose initialization values are not known during compilation time and Runtime constant values didn't evaluated at compilation time and aren't know at compilation time

    // Compile time constant is a constant whose value is known during Compilation Time and can be evaluated at compilation time.for instance literals like (1, 3.4, "You're very gorgeous") these are compile time constant.also note that if don't declared it with const or constexpr it is still a Runtime Constant not Compile Time Constant

    // In this example i will demonstrate why is constant expression is very useful

    // IMPORTANT!!
    // Note that const can be either known by the compiler or cannot be known by the compiler and constexpr will always be known by the compiler 

    // Note that not all constant value will be known during compilation time constant value could be either a Compile Time Constant or Run Time Constant..evaluating constant expression during compilation time will make our compilation time takes long because our compiler has to do a lot of works like calculating a result but such expressions only needed to evaluated or calculated once rather than everytime we run our programs.the resulting executables are faster and use less memory

    /*
    Note That Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.

    Note That Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.
    */

    // for instance
    // let's say that i have a simple variable that multiplies both value
    int input_user;
    int sum1{5 + 5}; // <- the result will be 10 of course but this result is a Runtime Constant time not Compile Time Constant the sum of 5 + 5 will always be run during Runtime constant not Compile Time Constant.so the sum of 5 + 5 will always be executed at Runtime Time which is not efficient

    std::cout << "Insert any numbers that is not negative number: ";
    std::cin >> input_user; // this is also a Runtime constant and the value cannot be known during compilation time because the input user is not constant expression

    const std::string result1 = (input_user >= 0) ? "Correct you're inserting a positive number" : "Incorrect you're inserting a negative number!!"; // <- this is also a Runtime constant whose values aren't known by the compiler
 
    PRINT(result1); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime


    const std::string name{"Gerry"}; // <- this is a Compile Time Constant.the value of name "Gerry" will be known at compilation time
    const int sum2{5 + 5}; // <- this is a Compile Time Constant.the sum of 5 + 5 will be evaluated or calculated during Compilation Time not Runtime Constant

    constexpr int num1 = 5; // <- all variables that is declared with constexpr will automaticlly known by the compiler
    constexpr int num2 = 6; // <- all variables that is declared with constexpr will automaticlly known by the compiler
    constexpr int result2 = (num1 > num2) ? num1 : num2; // <- all variables that is declared with constexpr will be known by the compiler

    // Function Constant Expression Result
    constexpr int result3 = facotrial(5);
    constexpr int result4 = sum(5,5);

    PRINT(result3); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 
    
    PRINT(result4); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 

    PRINT(result2); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 

    PRINT(name); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 
    
    PRINT(sum1); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 

    PRINT(sum2); // <- note that after i am printing the value to the console it will still a constant run time not compile time constant the reason why constexpr or const useful are useful is to know the value and evaluated the value during Compile Time not during Runtime 


    std::cin.get();
    return 0;
}
