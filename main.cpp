#include <iostream>
using namespace std;

int main() {
      int n, i, primo = 1, secondo = 1, terzo;
    cin >> n;
if (n>0){
       cout << primo;
   cout << secondo;
   while (true){
       if((primo+secondo)<=n) {
           cout << primo + secondo;
           if (primo < secondo) { primo += secondo; }
           else { secondo += primo; }

       }else{break;}
       }}
   }


   
