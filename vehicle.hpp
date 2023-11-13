#ifndef VEHICLE_HPP
#define VEHICLE_HPP_HPP

#include <iostream>

using namespace std;

class Vehicle
{
    protected:
    string m_placa;
    string m_modelo;

    public:
    Vehicle() : m_placa(""), m_modelo("") {};
    Vehicle(string placa) : m_placa(placa) {};

    ~Vehicle() {};

};

class Car : public Vehicle
{
    protected:
    Vehicle *m_vehicle;

    public:
    Car() : m_vehicle(NULL){};
    Car(Vehicle *m_vehicle, string modelo) : m_vehicle(m_vehicle){};

    ~Car(){};

};

class Bus : public Vehicle
{
    protected:
    Vehicle *m_vehicle;

    public:
    Bus() :  m_vehicle(NULL){};
    Bus(Vehicle *m_vehicle, string modelo) : m_vehicle(m_vehicle){};

    ~Bus(){};

};

class LightTruck : public Vehicle
{
    protected:
    Vehicle *m_vehicle;

    public:
    LightTruck() :  m_vehicle(NULL){};
    LightTruck(Vehicle *m_vehicle, string modelo) : m_vehicle(m_vehicle){};

    ~LightTruck(){};

};

class HeavyTruck : public Vehicle
{
    protected:
    Vehicle *m_vehicle;

    public:
    HeavyTruck() :  m_vehicle(NULL){};
    HeavyTruck(Vehicle *m_vehicle, string modelo) : m_vehicle(m_vehicle){};

    ~HeavyTruck(){};

};

class Routes : public Vehicle
{
    protected:
    string m_city;
    float m_distance;

    public:
    Routes() : m_city(""), m_distance(0) {};
    Routes(string city, float distance) : m_city(city), m_distance(distance) {};

    ~Routes(){}; 

};

#endif