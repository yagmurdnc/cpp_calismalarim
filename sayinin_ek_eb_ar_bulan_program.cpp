#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    long double sayi, enb=0, enk=0, sa=0;
    int i=1;
    do
    {
        cout<<"Lütfen"<<i<<". sayıyı giriniz.";
        cin>>sayi;
        sa=sa+sayi;
        i++;
        if(sayi>enb){
            enk=enb;
            enb=sayi;
        }
        else{
            enk=sayi;
        }
    } 
    while (sayi>-1);
    i--;
    cout<<"En büyük sayı: "<<enb<<"/n"<<"En küçük sayı: "<<enk<<"/n"<<"Girilen sayıların aritmetik ortalaması: "<<sa/i<<"/n";
    
}
