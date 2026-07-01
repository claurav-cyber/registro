#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombres;
    string dni;
    int edad;
};

int main() {
    int n, mayores50, sumaEdades;
    float promedio;
    
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    
    Persona personas[n];
    
    for (int i = 0; i < n; i++) {
        cout << "--- Persona " << i + 1 << " ---" << endl;
        cout << "Nombres: ";
        cin >> personas[i].nombres;
        cout << "DNI: ";
        cin >> personas[i].dni;
        cout << "Edad: ";
        cin >> personas[i].edad;
    }
    
    mayores50 = 0;
    sumaEdades = 0;
    
    for (int i = 0; i < n; i++) {
        if (personas[i].edad > 50) {
            mayores50++;
        }
        sumaEdades = sumaEdades + personas[i].edad;
    }
    
    promedio = (float)sumaEdades / n;
    
    cout << "\n========== RESULTADOS ==========" << endl;
    cout << "Personas mayores de 50 anios: " << mayores50 << endl;
    cout << "Promedio de edades: " << promedio << endl;
    
    cout << "--- LISTADO COMPLETO ---" << endl;
    for  (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << personas[i].nombres 
             << "  DNI: " << personas[i].dni 
             << "  Edad: " << personas[i].edad << endl;
    }
    
    return 0;
}
