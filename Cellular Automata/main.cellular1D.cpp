#include <iostream>
#include <conio.h>
#include "Cell1D.hpp"

using namespace std;

int main()
{
    uint8_t rule ;
    char str[] = {0,0,0,0,0,0} ;
    while(1){
        cout << "Rule : " ;
        cin >> str ;
        rule = atoi(str) ;

        Cell1D generation(167,rule) ;

        generation.display() ;
        for(int i = 0 ; i<25 ; i++){
            generation.evolve() ;
            generation.display() ;
        }
        char k = 0 ;
        while(k!=27){
            generation.evolve() ;
            generation.display() ;
            k=getch() ;
        }
        system("cls") ;
    }
    return 0;
}
