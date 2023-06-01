#include<iostream>//Libreria principal de C++
#include<cmath>
#include<iomanip>

using namespace std;

//APROXIMACION A PI
double crearpi(int max_iter) {
    double pi = 0.0;
    int n = 0;
    for (int n = 0; n < max_iter; n++) {
        double term = (n % 2 == 0) ? 1.0 / (2 * n + 1) : -1.0 / (2 * n + 1);//si n es par entonces sera true y si es inpar false
        pi += term;//acumulo los resultados en pi
    }

    return pi * 4;//multiplico pi * 4 para aproxiparme al resultado
}

int main() {
    int iter =1000000 ; // Aumente la cantidad de iteraciones para obtener más precisión
    double resul = crearpi(iter);

    cout << setprecision(7) << resul;

    return 0;
}







