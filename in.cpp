
#include <iostream> 
using namespace std; 
inline int cube(int s) 
{ 
cout << __LINE__ << "Line";
    return s*s*s; 
} 
int main() 
{ 
    cout << "The cube of 3 is: "  << cube(3) << "\n"; 
    return 0; 
} //Output: The cube of 3 is: 27 
