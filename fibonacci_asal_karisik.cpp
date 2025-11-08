#include <iostream>
#include <conio.h>
using namespace std;

void asalsayi(unsigned int sayi){
    bool karar=false;
    for (int i = 2; i < sayi/2+1; i++)
    {
        if(sayi%i==0){
            karar=true;
            break;
        }
    }
    if(karar==true){
        cout<<sayi<<" sayisi asal";
    }
    else{
        cout<<sayi<<" sayisi asal degildir";
    }
}
int main(){
asalsayi(103);
}