#include <iostream>
using namespace std;

int main() {
      int n, primo = 1, secondo = 1;
    cin >> n;
if (n>0){
       cout << primo << endl;
   cout << secondo << endl;
   while (true){
       if((primo+secondo)<=n) {
           cout << primo + secondo << endl;
           if (primo < secondo) { primo += secondo; }
           else { secondo += primo; }

       }else{break;}
       }}
   }


   
