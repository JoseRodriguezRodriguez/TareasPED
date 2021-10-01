#include <iostream>
#include <string>

using namespace std;

struct nodo
{
    int dato;
    nodo *sig;
};

class ListaSimpleConMenu
{
    private:

        nodo *pInicio;

    public:

        ListaSimpleConMenu();

        void insInicio(int);
        void menu(int);
        void datosDeLista(string);
        void mostrarListaSimple(void);
        bool eliminarDato(int);
};

ListaSimpleConMenu::ListaSimpleConMenu()
{
    pInicio = NULL;
}

void ListaSimpleConMenu::insInicio(int dato)
{
    nodo *nuevo;

    nuevo = new nodo;   
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimpleConMenu::menu(int)
{
    int opcion;
    
    cout << endl;
    cout << "---MENU---" << endl << endl;
    cout << "1) Llenar lista" << endl;
    cout << "2) Borrar persona de la lista" << endl;
    cout << "3) Mostrar lista" << endl;
    cout << "4) Salir" << endl << endl;
    cout << "Seleccion: "; cin >> opcion;

    switch (opcion)
    {
        case 1:
            datosDeLista(string());
            break;
        case 2:
            eliminarDato(int());
            break;
        case 3:
            mostrarListaSimple();
            break;
    }
}

void ListaSimpleConMenu::datosDeLista(string)
{
    string carnet, nombreComp, edad, telefono, correo;

    cout << endl;
    cout << "Ingrese los datos de la persona en el siguiente orden:" << endl; 
    cout << "Carnet, primer nombre y primer apellido, edad, numero de telefono y correo electronico." << endl << endl;
    getline(carnet, nombreComp, edad, telefono, correo);
}

bool ListaSimpleConMenu::eliminarDato(int)
{
    cout << endl;
    cout << "opcion 2" << endl;
}

void ListaSimpleConMenu::mostrarListaSimple(void)
{
    cout << endl;
    cout << "opcion 3" << endl;
}

int main()
{
    ListaSimpleConMenu objListaSimpleConMenu;
    
    cout << endl;
    cout << "Seleccione una de las opciones del menu" << endl;
    objListaSimpleConMenu.menu(int ());

}