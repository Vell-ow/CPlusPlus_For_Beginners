// IC01_FirstDayC++: Add three numbers together and then print out a box made of ASCII text.
// Author: Andrew Coviello
#include <iostream> 
using namespace std ;
int main()
{    
  // Create three int variables to add using random values    
  int a = 52 ;    
  int b = 39 ;    
  // This is where I add int c
  int c = 71 ;
  // Calculate their sum and print the result
  // Appended to meet the assignment terms    
  int sum = a + b + c ;    
  cout << "The sum of " << a << ", " << b << " and " << c << " is " << sum << endl ;

  // Draw a square using linear characters on the console (monitor / screen) through cout commands.    
  // End each line with "<< endl" so that the next cout command starts on a new line.    
  cout << "   ________________________ " << endl ;    
  cout << "  |                        |" << endl ;
  cout << "  |                        |" << endl ;
  cout << "  |      C++ Is Fun        |" << endl ;    
  cout << "  |                        |" << endl ;    
  cout << "  |________________________|" << endl ;   
  
  return 0 ;
}