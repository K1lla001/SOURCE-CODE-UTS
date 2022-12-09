#include <iostream>

using namespace std;

int main(){

      int itemCode, price, dcPrice, finalPrice;
      float discount;
      string itemName;

      cout << "Masukkan Kode Item : ";
      cin >> itemCode;

      switch (itemCode){
            case 1:
                itemName = "Table";
                price = 1000000;
                discount = 10;
                dcPrice = (discount/100) * price;
                finalPrice = price - dcPrice;
            break;
            case 2:
                 itemName = "Paper";
                price = 50000;
                discount = 0;
                dcPrice = 0;
                finalPrice = price - dcPrice;
            break;
            case 3:
                  itemName = "Envelopes";
                  price = 15000;
                  discount = 10;
                  dcPrice = (discount/100) * price;
                  finalPrice = price - dcPrice;
            break;
            case 4:
            itemName = "Computer";
                  price = 7000000;
                  discount = 15;
                  dcPrice = (discount/100) * price;
                  finalPrice = price - dcPrice;
            break;
            case 5:
            itemName = "Book Cases";
                  price = 150000;
                  discount = 5;
                  dcPrice = (discount/100) * price;
                  finalPrice = price - dcPrice;
          break;
      
      }
      if (itemCode <= 5){
      cout << "Nama Item \t\t: " << itemName << endl;
      cout << "Harga Item \t\t: " << price << endl;
      cout << "Discount \t\t: " << dcPrice << endl;
      cout << "Harga setelah discount \t: " << finalPrice << endl;
      } else {
            cout << "Kode item belum tersedia" << endl;
      }
      return 0;
}
