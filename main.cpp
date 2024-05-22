#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
int main(){
    int den1, den2;
    int num1, num2;
    int result;
    int result2;
    int opc;
    int MDC = 2;

    cout << "Insira o numerador da primeira fração: ";
    cin >> num1;

    cout << "Insira o deniminador da primeira fração: ";
    cin >> den1;

    cout << "Insira o numerador da segundo fração: ";
    cin >> num2;

    cout << "Insira o deniminador da segundo fração: ";
    cin >> den2;

    cout << "Digite 1 para adição: \n";
    cout << "Digite 2 para subtração: \n";
    cout << "Digite 3 para multiplicação: \n";
    cout << "Digite 4 para divisão: \n"; 
    cin >> opc;

    if(opc == 1){
        if (den1 == den2)
        {
        result = (num1 * den2) + (num2 * den1);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        }else{
        result = (num1 * den2) + (num2 * den1);
        result2 = (den1 * den2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        
        }
    } else if(opc == 2){
        if (den1 == den2)
        {
        result = (num1 * den2) - (num2 * den1);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        }else{
        result = (num1 * den2) - (num2 * den1);
        result2 = (den1 * den2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        
        }
    } else if(opc == 3){
        if (den1 == den2)
        {
        result = (num1 * num2);
        result2 = (den1 * den2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        
        cout << result  << "/" << result2 ;
        }else{
        result = (num1 * num2);
        result2 = (den1 * den2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }      
        cout << result  << "/" << result2 ;
        
        }
    } else if(opc == 4){
        if (den1 == den2)
        {
        result = (num1 * den2);
        result2 = (den1 * num2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        }else{
        result = (num1 * den2);
        result2 = (den1 * num2);
        while (result % MDC!= 0 && result2 % MDC != 0){
            MDC++;
        }
        result = result / MDC;
        result2 = result2 / MDC;
        cout << result  << "/" << result2 ;
        
        }
}
}
