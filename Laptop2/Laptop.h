
#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
using namespace std;


class CPU
{
public:
    char model[20];
    int cores;
    double frequency;

    CPU(const char* model, int cores, double frequency);
    void show() const;
};

class RAM
{
public:
    int size;
    char type[20];

    RAM(int size, const char* type);
    void show() const;
};

class Storage
{
public:
    int capacity;
    char type[20];

    Storage(int capacity, const char* type);
    void show() const;
};

class GPU
{
public:
    char model[20];
    int memory;

    GPU(const char* model, int memory);
    void show() const;
};

class Display
{
public:
    double size;
    char resolution[20];

    Display(double size, const char* resolution);
    void show() const;
};

class Laptop
{
private:
    CPU cpu;
    RAM ram;
    Storage storage;
    GPU gpu;
    Display display;

public:
    Laptop(const char* cpuModel, int cpuCores, double cpuFrequency,
        int ramSize, const char* ramType,
        int storageCapacity, const char* storageType,
        const char* gpuModel, int gpuMemory,
        double displaySize, const char* displayResolution);

    void showSpecifications() const;
};

#endif
