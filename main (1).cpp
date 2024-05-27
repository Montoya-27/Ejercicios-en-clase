/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float suma = 0, nota;
    for (int i = 0; i < 6; ++i) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        suma += nota;
    }
    cout << "El promedio es: " << suma / 6.0 << endl;
    return 0;
}
