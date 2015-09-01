#include <iostream>
#include <bitset>

using namespace::std;

int main() {
   
   const int N = 17;
   long int num = pow(2, N);
   int gray;
   for (int i = 0; i < num; i++) {
      gray = i ^ (i / 2);
      bitset<N> bit(gray);
      cout << bit << endl;
   }
   system("pause");
}