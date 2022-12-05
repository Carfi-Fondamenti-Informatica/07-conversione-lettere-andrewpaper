#include <iostream>
#include "lib.h"

using namespace std;

int main(){
    char a;
    cin >> a;

    if(verifica(a)==true){
        cout << conversione(a);
    }else{
        cout << "errore"<< endl;
    }
    return 0;
}
