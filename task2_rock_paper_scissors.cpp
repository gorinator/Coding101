/*
Задача 2: Консольная игра "Камень, ножницы, бумага"

Описание:
   Реализовать версию игры "Камень, ножницы, бумага" между пользователем и компьютером.

*/

#include <iostream>
#include <random>
using namespace std;

int main() {
    
    
    int sumi =0;
    int sumk=0;
    int a, col;
    int comp=0;
    random_device rd;
    mt19937 gen(rd());
    
    cout << "\tHello!\n";
    cout << "\tNe hoches sigrat v igru: kamen, nozhnezy, bumaga?\n";
    while(1)
    {
        cout << "\t\nIgraem? Esli igraem nazhmi - 1, esli net - nazhmi 0\n";
        cin >> a;
        if (a == 0){
            cout << "\tBye!\n";
            break;
        }
        else if (a ==1){
            cout << "\t\tVyberai:\n";
            cout << "\t\t1 - kamen\n";
            cout << "\t\t2 - nozhnicy\n";
            cout << "\t\t3 - bumaga\n";
            cin >> col;
            uniform_int_distribution<int> comp (1, 3);
            
            
           switch(comp(rd)) {
            case 1:
                if(col ==1){
                    
                    cout << "Computer vybral camen! Nichya.\n";
                    sumi=sumi+0;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                    
                }
                else if (col ==2){
                    
                    cout << "Computer vybral camen! Computer win!\n";
                    sumi=sumi+0;
                    sumk=sumk+1;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else if (col ==3){
                    
                    cout << "Computer vybral camen! You win!\n";
                    sumi=sumi+1;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else {
                    cout << "Ty oshibsya! Vvedi: 1,2,3!\n";
                    break;
                }
              break;
              case 2:
                if(col ==2){
                    cout << "Computer vybral nozhnicy! Nichya.\n";
                    sumi=sumi+0;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else if (col ==3){
                    cout << "Computer vybral nozhnicy! Computer win!\n";
                    sumi=sumi+0;
                    sumk=sumk+1;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                    
                }
                else if (col ==1){
                    cout << "Computer vybral nozhnicy! You win!\n";
                    sumi=sumi+1;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else {
                    cout << "Ty oshibsya! Vvedi: 1,2,3!\n"; 
                    break;
                }
              break;
              case 3:
                if(col ==3){
                    cout << "Computer vybral bumagu! Nichya.\n";
                    sumi=sumi+0;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else if (col ==1){
                    cout << "Computer vybral bumagu! Computer win!\n";
                    sumi=sumi+0;
                    sumk=sumk+1;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else if (col ==2){
                    cout << "Computer vybral bumagu! You win\n";
                    sumi=sumi+1;
                    sumk=sumk+0;
                    cout<<"\nYou "<<sumi<<" : "<<sumk<<" Computer"<<"\n";
                }
                else {
                    cout << "Ty oshibsya! Vvedi: 1,2,3!\n";
                    break;
                }
              break;
            }

  
       }
    
   }

    return 0;
}
