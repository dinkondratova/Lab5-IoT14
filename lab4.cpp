#include "pch.h"
#include <iostream>

int main()
{

	Notebook Notebook1, Notebook2, Notebook3;

	std::cout << "CPU_frequency_in_GHz = " << Notebook1.getCPU_frequency_in_GHz() << "\n";
	std::cout << "RAM_volume = " << Notebook1.getRAM_volume() << "\n";
	std::cout << "Manufacturer = " << Notebook1.getManufacturer() << "\n";
	std::cout << "CPU_Voltage = " << Notebook1.getCPU_Voltage() << "\n";
	std::cout << "CPU_Temperature = " << Notebook1.getCPU_Temperature() << "\n";
	Notebook1.~Notebook();
	std::cout << " "  << "\n";
	std::cout << "CPU_frequency_in_GHz = " << Notebook2.getCPU_frequency_in_GHz() << "\n";
	std::cout << "RAM_volume = " << Notebook2.getRAM_volume() << "\n";
	std::cout << "Manufacturer = " << Notebook2.getManufacturer() << "\n";
	std::cout << "CPU_Voltage = " << Notebook2.getCPU_Voltage() << "\n";
	std::cout << "CPU_Temperature = " << Notebook2.getCPU_Temperature() << "\n";
	Notebook2.~Notebook();
	std::cout << " " << "\n";
	std::cout << "CPU_frequency_in_GHz = " << Notebook3.getCPU_frequency_in_GHz() << "\n";
	std::cout << "RAM_volume = " << Notebook3.getRAM_volume() << "\n";
	std::cout << "Manufacturer = " << Notebook3.getManufacturer() << "\n";
	std::cout << "CPU_Voltage = " << Notebook3.getCPU_Voltage() << "\n";
	std::cout << "CPU_Temperature = " << Notebook3.getCPU_Temperature() << "\n";
	Notebook3.~Notebook();
	std::cout << " " << "\n";
}
