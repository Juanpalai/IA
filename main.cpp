#include <iostream>
#include <string>

using namespace std;

class veicuoclass {
public:
    bool moto;
    bool carro;
};

class persona {
public:
    string nombre;
    char veiculo;
    class veicuoclass;
    bool alcohol;
    int dinero;
};

int main() {
    string aux;
    int opt;
    persona viajero[5];

    viajero[0].nombre = "Carlos";
    viajero[1].nombre = "Tania";
    viajero[2].nombre = "Camilo";
    viajero[3].nombre = "Pacho";


    cout << "¿Cual es tu nombre? " << endl;
    cin >> viajero[4].nombre;

    cout << "Tu nombre es: " << viajero[4].nombre << endl;
    
    for (int i = 0; i < 4; i++) {
        cout <<viajero[i].nombre <<", ";
    }
    cout<<"y "<<viajero[4].nombre<<" ";
    cout << " se fueron a runbear a Ipiales,para el viaje algunos llevaron veiculo y otros no" << endl;

    
    return 0;
}
