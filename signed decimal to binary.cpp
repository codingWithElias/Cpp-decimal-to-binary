// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// signed decimal to binary
int main() {
    // Write C++ code here
    int num;
    cin>>num;

    // by default the sign is positive 
    int sign = 0;

    // if the number is negative
    if(num < 0){
        // make the sign negative
        sign = 1;
        // make the number positive
        num = num * -1;
    }
    
    int _continue = true;
    int reminder;
    string binary = "";
    
    while(_continue){
        // Get the remainder 
        reminder = num%2;
        // Divide the num by 2
        num = num/2;
        // adding remainder starting from the left to the right.
        binary = to_string(reminder)+binary;
        // if num is lessthan 1 stop the loop
        if(num < 1) _continue = false;
    }
    // adding the sign from the left
    binary = to_string(sign)+binary;
    // out put the result
    cout << "binary = "<<binary;
    return 0;
}