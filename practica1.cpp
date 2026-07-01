#include<iostream>
#include<string>
using namespace std;

struct EMPLEADO{
    string nombre;
    string sexo;
    float sueldo;
};

int main(){
    int cantidad,max,men;
    max=0;
    men=0;
    EMPLEADO A[100];

    cout<<"-------ingrese la cantidad de empleados-----"<<endl;
    cin>>cantidad;
    while(cantidad<=0){
        cout<<"la cantidad deve ser mayor a 0 ,intente nueva mente"<<endl;
        cin>>cantidad;
    }

    cout<<"ingrese el nombre del empleado:";
    for(int i=0;i<cantidad;i++){
        cout<<"Empleado"<<(i+1)<<endl;
        cout<<"nombre del empleado:";
        cin>>A[i].nombre;
        cout<<"ingrese  el sexo del empleado (M/F):";
        cin>>A[i].sexo;
        while( A[i].sexo !="M" && A[i].sexo !="F" && A[i].sexo !="m" && A[i].sexo !="f"){
            cout<<"sexo invalido. ingrese otra vez el sexo:";
            cin>>A[i].sexo;
        }
        cout<<"ingrese el sueldo del empleado:";
cin>>A[i].sueldo;
while(A[i].sueldo<=0){
	cout<<" el sueldo de un empleado no puede ser menor a cero . intente otra vez:";
	cin>>A[i].sueldo;
}

    }
    for(int i=1;i<cantidad;i++){
    	if(A[i].sueldo>A[max].sueldo){
    		max=i;
		}
		if(A[i].sueldo<A[men].sueldo){
			men=i;
		}
	}
	cout<<"--------RESULTADOS----------"<<endl;
	cout<<"---EMPLEADO CON MAYOR SUELDO:--"<<endl;
cout<<"nombre:"<<A[max].nombre<<endl;
cout<<"sexo:"<<A[max].sexo<<endl;
cout<<"salario:"<<A[max].sueldo<<endl;

	cout<<"---EMPLEADO CON MENOR SUELDO:--"<<endl;
cout<<"nombre:"<<A[men].nombre<<endl;
cout<<"sexo:"<<A[men].sexo<<endl;
cout<<"salario:"<<A[men].sueldo<<endl;
    return 0;
}
