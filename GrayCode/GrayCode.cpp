#include <iostream>
#include <bitset>
#include <iostream>
#include <fstream>

using namespace::std;

int main() {
   
   const int N = 18;
   long int num = pow(2, N);
   int gray;
   ofstream myfile;
   string filename = to_string(N)+ "bit.txt";
   
   myfile.open(filename);


   for (int i = 0; i < num; i++) {
      cout << i << endl;
      gray = i ^ (i / 2);
      bitset<N> bit(gray);
      myfile << bit << endl;
   }
   myfile.close();
   system("pause");
}