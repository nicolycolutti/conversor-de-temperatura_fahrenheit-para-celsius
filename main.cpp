#include <iostream>

using namespace std;

int main()
{
    float F;
    
    cout<< "Insira a temperatura em graus Fahrenheit: ";
    cin>> F;
    
    float C = (F-32)/1.8;
    
    cout<< "Essa temperatura em graus Celsius é: "<< C;
    
    return 0;
}
