#include <iostream>

using namespace std;
int main()
{

     int a,b,input;
     cout << "Masukkan nilai : " ;
      cin >> input;

     for(a = 1; a <= input; a++){
      for (b = input; b >= a; b--){
            if (a == b){
            cout << a << "+";
            } else {
            cout << a << "-";
            }
      }
            cout << endl;
     }

}
