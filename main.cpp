#include <iostream>
using namespace std;

int main() {
      int n, i, primo = 1, secondo = 1, terzo;
    cin >> n;
if (n==1)
    cout << primo;
    else if (n>1){
        cout << primo << endl;
        cout << secondo << endl;
        for (i = 3; i <= n; i++) {

            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << terzo << endl;
        } }


}

   
