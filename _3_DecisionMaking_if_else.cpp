// The code in if block is executed if the condition specified in if is true, the else block is executed otherwise.
#include <iostream>
using namespace std ;
int main () {
 int age ;
 cin >> age ;
 
 if ( age >= 18 ) {
 cout << "You can vote." ;
 } 
 else {
 cout << "Not eligible for voting." ;
 }
 
 return 0 ;
}