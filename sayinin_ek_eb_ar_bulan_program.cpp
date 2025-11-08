#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    long double sayi, enb=0, enk=0, sa=0;
    int i=1;
    cout<<"Lutfen"<<i<<". sayiyi giriniz.";
    cin>>sayi;
    i++;
    if(sayi>-1){
       sayi=enk;
       while (true)
       {
            cout<<"Lutfen"<<i+1<<". sayiyi giriniz.";
            cin>>sayi;
            if(sayi<0)break;
            sa=sa+sayi;
            i++;
            if(sayi>enb){
                enb=sayi;
            }
            if(sayi<enk){
                enk=sayi;
            }
        }
    }
    i--;
    cout<<"En buyuk sayi: "<<enb<<"/n"<<"En kucuk sayi: "<<enk<<"/n"<<"Girilen sayilarin aritmetik ortalamasi: "<<sa/i<<"/n";
    return 0;
}
