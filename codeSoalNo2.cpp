#include <iostream>
using namespace std;
int main()
{
   int nilai;
   cout << "Masukkan sebuah bilangan bulat: ";
   cin >> nilai;

   if (nilai % 2 == 0)
   { 
        	cout << nilai << " adalah bilangan genap" ;
   }
   else
   {
        	cout << nilai << " adalah bilangan ganjil";
   }

   return 0;

}
