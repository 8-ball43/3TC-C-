#include <iostream>
#include <Windows.h>
using namespace std;

void funkcja() {
  SYSTEMTIME czas;
  GetSystemTime(&czas);
  char *tydzien[7] { "nieziela", "poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota"};
  if(zmiana==1){
    cout<<"Dzis jest "<<tydzien[czas.wDayOfWeek]; zmiana =2;}
    else{ cout<<"                            "; zmiana=1;}
  }
}
int main(int argc, char *argv[]){
  system("chcp 65001");system("cls");
  int ile=30; while(ile>=0) {system("cls");
  funkcja(); Sleep(300); ile--;}
  return 0;
}
