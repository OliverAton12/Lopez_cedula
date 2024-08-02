#include <iostream>
using namespace std;

bool CedulaCorrecta(int cedula[], int total) {
    int sumapar = 0,  sumarimpar = 0;
    for (int k = 0; k < total-1; k++) {
        // multiplicar posiciones pares por 2
        int num = 0;
        if (k % 2 == 0) {
    num = cedula[k] * 2; // si el resultado es >= 9, se resta 9
    if (num > 9) {
        num -= 9;
    }
    sumapar += num;
} else {
    // se suman las posiciones impares
    sumarimpar += cedula[k];
}
        
    } //fin 
    int suma = sumapar + sumarimpar;
// aplicamos módulo 10
int resto = suma % 10;
int digitoVer = 10 - resto;
if (digitoVer == 10) {
    digitoVer = 0;
}

// validamos si el dígito coincide con el último número de la cédula
if (digitoVer == cedula[total - 1]) {
    return true;
} else 
    return false;

}
int main()
{
    int cedula[]={0,8,0,3,2,6,1,4,8,6};
    int total = sizeof(cedula)/sizeof(cedula[0]);
    //cout<<"Tamaño del vector "<<total;
    
    if(CedulaCorrecta(cedula, total))
        cout<<endl<<"La cédula es correcta";
    else
        cout<<endl<<"La cédula NO es correcta";

    return 0;
}




