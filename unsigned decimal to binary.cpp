// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// unsigned decimal to binary
int main() {
    // Write C++ code here
    int num;
    cin>>num;
    // if the number is negative 
    if(num < 0){
        cout<< "non-negative numbers only";
    }else {
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
        // out put the result
        cout << "binary = "<<binary;
    }
    return 0;
}