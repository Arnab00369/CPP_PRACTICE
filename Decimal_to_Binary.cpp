// Decimal to Binary Conversion

#include <iostream>
using namespace std;
int main(){
   int number;
   cout << "Enter a Decimal Number: ";
   cin >> number;
   int rem, ans = 0, i = 1;
   while(number>0){
      //remainder
      rem = number % 2;
      //quotient
      number = number / 2;
      //answer
      ans = ans + rem * i;
      //multiplied by 10 to get the next place value
      i = i * 10;
   }
   cout << "Binary Number: " << ans << endl;
   return -1;
}