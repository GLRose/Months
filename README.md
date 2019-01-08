# Months
file io/std library functions seekg() &amp;&amp; clear()

STACK OVERFLOW LINK FOR SEEKG AND CLEAR: Shows how these functions operate... 
https://stackoverflow.com/questions/5986442/question-about-seekg-function-of-ifstream-in-c

GETLINE FUNCTION LINK USING ARRAY: https://www.geeksforgeeks.org/getline-function-character-array/
// C++ program to show the getline() with  
// character array 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    char str[20]; 
    cout << "Enter Your Name::"; 
  
    // see the use of getline() with array 
    // str also replace the above statement 
    // by cin >> str and see the difference 
    // in output 
    cin.getline(str, 20); 
  
    cout << "\nYour Name is:: " << str; 
    return 0; 
} 


GETLINE FUNCTION LINK WITHOUT ARRAY: https://www.geeksforgeeks.org/getline-string-c/
// C++ program to demonstrate getline() 
  
//#include <iostream> 
//#include <string> 
//using namespace std;

int main () 
{ 
    string str; 
    
    //regular cin stream
    getline (cin, str); 
    //to use file io output just replace the cin with your input file variable name...EXAMPLE BELOW
    getline (infile,str);
  
    return 0; 
} 
