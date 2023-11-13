#include "vehicle.hpp"
#include <vector>

int main()
{
    vector< Vehicle *> vehicle;
    vector< Car > car;
    vector< Bus > bus;
    vector< LightTruck > lightTruck;
    vector< HeavyTruck > heavyTruck;
    vector < pair < string, float >> routes;

    while(true)
    {
        cout << "UFSC VEHICLE MANAGER SYSTEM (UVMS)" << endl;
        cout << "-----------------------------------" << endl;
        cout << "1. Insert a new vehicle" << endl;
        cout << "2. Insert a route to a vehicle be executed" << endl;
        cout << "3. Show reports (summary)" << endl;
        cout << "4. Show history by vehicle" << endl;
        cout << "0. Quit" << endl;

        cout << "Select an option: ";
        char option;
        cin >> option;

        if(option == '1')
        {
           
            cout << "Select vehicle"<< endl;
            cout << "1.Car"<<endl;
            cout << "2.Bus"<<endl;
            cout << "3.Light truck"<<endl;
            cout << "4.Heavy truck"<<endl;
            
            cout << "Option choosen: ";
            char op;
            cin >> op;
            string placa;
            string modelo;
            
            
            if(op == '1')
            {
                
                cout << "Digite a placa: ";
                cin >> placa;
                

                Vehicle *newVehicle = new Vehicle(placa);
                vehicle.push_back(newVehicle);
                cout << endl;

                cin.ignore();
                cout << "Type description: ";
                getline(cin, modelo);



                continue;
            }
            if(op == '2')
            {
                
                cout << "Digite a placa: ";
                cin >> placa;
                cin.ignore();
                cout << "Digite a descrição do veículo: ";
                getline(cin, descr);

                Bus new_bus(placa, descr);
                bus.push_back(new_bus);
                cout << endl;
                continue;
            }
            if(op == '3')
            {
                cout << "Digite a placa: ";
                cin >> placa;
                cin.ignore();
                cout << "Digite a descrição do veículo: ";
                getline(cin, descr);

                LightTruck new_lightTruck(placa, descr);
                lightTruck.push_back(new_lightTruck);
                cout << endl;
                continue;
            }
            if(op == '4')
            {
                cout << "Digite a placa: ";
                cin >> placa;

                cin.ignore();
                cout << "Digite a descrição do veículo: ";
                getline(cin, descr);

                HeavyTruck new_heavyTruck(placa, descr);
                heavyTruck.push_back(new_heavyTruck);
                cout << endl;
                continue;
            }
        }
            continue;

        if(option == '2')
        {
            cout << "Enter with vehicle plate: ";
            size_t indexPlate;
            cin >> indexPlate;;

            

        }
    }    
    
}