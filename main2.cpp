#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int zmiana=1;
int j=0;
string kolorki = "0123456789ABCDEF01234567890ABCDEF0";
void funkcja() {
  SYSTEMTIME czas;
  GetLocalTime(&czas);
  string wybierz = "color ";
  wybierz+=kolorki[j];
  wybierz+=kolorki[j+2];
  system(wybierz.c_str()); j++;
  char *tydzien[7] { "nieziela", "poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota"};
  if(zmiana==1){
    cout<<"Dzis jest "<<tydzien[czas.wDayOfWeek]; zmiana =2;}
    else{ cout<<"                            "; zmiana=1;}
  }

int main(int argc, char *argv[]){
  system("chcp 65001");
  system("cls");
  int ile=30;
  while(ile>=0)
    {system("cls");
  funkcja(); Sleep(300); ile--;}
  return 0;
   cout<<"Chces jeszcze raz:";
  string odpowiedz;
  cout<<odp;
  cout


}



