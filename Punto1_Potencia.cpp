#include <iostream>
using namespace std;

long long potencia( int base, int exponencial){
    long long resultado =1; 
for ( int  i =0; i< exponencial; i++ ){
    resultado=resultado*base;

}
return resultado;


}


int main() {
  
int base, exponencial;  
cin>> base >>exponencial;

cout<<potencia( base,exponencial ) <<endl;




    return 0;
}
