#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int opc_us, gane = 0, perdi = 0, empate = 0, terminar = 0;
    do
    {
        int t,opc_pc;
        t = time(NULL);
        srand(t);
        opc_pc = rand() % 3 + 1;


        cout << "Opciones:\n1-Piedra\n2-Papel\n3-Tijera\n";
        cout << "Ingrese un opcion:\n";
        cin >> opc_pc;
        switch (opc_pc)
        {
        case 1:
            if (opc_us == 1)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Empate";
                empate = empate + 1;
            }
            else if (opc_us == 2)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Gano";
                gane = gane + 1;
            }
            else if (opc_us == 3)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Perdio";
                perdi = perdi + 1;
            }

        case 2:
            if (opc_us == 1)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Gano";
                gane = gane + 1;
            }
            else if (opc_us == 2)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Gano";
                empate = empate + 1;
            }
            else if (opc_us == 3)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Perdio";
                perdi = perdi + 1;
            }

        case 3:
            if (opc_us == 1)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Gano";
                gane = gane + 1;
            }
            else if (opc_us == 2)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Perdio";
                perdi = perdi + 1;
            }
            else if (opc_us == 3)
            {
                cout << "La computadora eligio" << opc_pc;
                cout << "Perdio";
                empate = empate + 1;
            }
        }
    }while (opc_us!=0);
    cout<<"Veces empatadas"<<empate;
    cout<<"Veces ganadas"<<gane;
    cout <<"Vces perdidas"<<perdi;
    return 0;
}