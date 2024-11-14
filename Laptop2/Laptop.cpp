
#include "Laptop.h"
#include <cstring>
#pragma warning(disable : 4996)


CPU::CPU(const char* model, int cores, double frequency) : cores(cores), frequency(frequency)
{
    strncpy(this->model, model, sizeof(this->model) - 1);
    this->model[sizeof(this->model) - 1] = '\0';
}

void CPU::show() const
{
    cout << "CPU: " << model << ", Cores: " << cores << ", Frequency: " << frequency << "GHz" << endl;
}

RAM::RAM(int size, const char* type) : size(size)
{
    strncpy(this->type, type, sizeof(this->type) - 1);
    this->type[sizeof(this->type) - 1] = '\0';
}

void RAM::show() const
{
    cout << "RAM: " << size << "GB, Type: " << type << endl;
}

Storage::Storage(int capacity, const char* type) : capacity(capacity)
{
    strncpy(this->type, type, sizeof(this->type) - 1);
    this->type[sizeof(this->type) - 1] = '\0';
}

void Storage::show() const
{
    cout << "Storage: " << capacity << "GB, Type: " << type << endl;
}

GPU::GPU(const char* model, int memory) : memory(memory)
{
    strncpy(this->model, model, sizeof(this->model) - 1);
    this->model[sizeof(this->model) - 1] = '\0';
}

void GPU::show() const
{
    cout << "GPU: " << model << ", Memory: " << memory << "GB" << endl;
}

Display::Display(double size, const char* resolution) : size(size)
{
    strncpy(this->resolution, resolution, sizeof(this->resolution) - 1);
    this->resolution[sizeof(this->resolution) - 1] = '\0';
}

void Display::show() const
{
    cout << "Display: " << size << " inches, Resolution: " << resolution << endl;
}

Laptop::Laptop(const char* cpuModel, int cpuCores, double cpuFrequency,
    int ramSize, const char* ramType,
    int storageCapacity, const char* storageType,
    const char* gpuModel, int gpuMemory,
    double displaySize, const char* displayResolution)
    : cpu(cpuModel, cpuCores, cpuFrequency),
    ram(ramSize, ramType),
    storage(storageCapacity, storageType),
    gpu(gpuModel, gpuMemory),
    display(displaySize, displayResolution) {}

void Laptop::showSpecifications() const
{
    cpu.show();
    ram.show();
    storage.show();
    gpu.show();
    display.show();
}
