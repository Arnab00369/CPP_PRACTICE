#include <iostream>
using namespace std;

int main(){
   int number,ans = 0, i = 0;
   cout << "Enter a Binary Number: ";
   cin >> number;
   while(number > 0)   {
      int rem = number%10;
      number /= 10;
      if(rem == 1)
         ans += rem*(1 << i);

      i++;
      
   }
   cout << "Decimal Number: " << ans << endl;
   return 0;
}