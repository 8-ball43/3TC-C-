#include <iostream>


int main(int argc, char *argv[]){
    std::cout<<"Podaj imie:";
    std::string zmienna;
    std::cin>>zmienna;
    std::cout<<"Witaj "<<zmienna<<std::endl;
    int wiek;
    std::cout<<"Podaj wiek:";
    std::cin>>wiek;
    if(wiek<0){
     std::cout<<"Wroc gdy siê urodzisz!";
    } else if(wiek<7){
      std::cout << "Czas na przedszkole i zabawe!";
    }
    else if(wiek<15){
      std::cout << "Czas na szkole i nauke podstaw!";
    }else {std::cout<<"Czas na C++!";}
    for(int i=0;i<10;i++){
     std::cout<<"za zmienna";

    }
    std::getchar();
    std::getchar();
    return 0;
}
