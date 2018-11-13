#ifndef PCH_H
#define PCH_H
class Notebook
{

private:
	int CPU_frequency_in_GHz;
	long long RAM_volume;
	char* Manufacturer;
public:
	int getCPU_frequency_in_GHz()
	{
		return CPU_frequency_in_GHz;
	}
	long long getRAM_volume()
	{
		return RAM_volume;
	}
	char* getManufacturer()
	{
		return Manufacturer;
	};



	int Power;
	char* Manufacturer_Name;

	Notebook(void)
	{
		CPU_frequency_in_GHz = 2;
		RAM_volume = 64000000;
		Manufacturer = (char*)"ASUS";

		CPU_Voltage = 3;
		CPU_Temperature = 20;
	}
	Notebook(int n_CPU_frequency_in_GHz, long long n_RAM_volume, char* n_Manufacturer,
		int n_CPU_Voltage, int n_CPU_Temperature)
	{
		CPU_frequency_in_GHz = n_CPU_frequency_in_GHz;
		RAM_volume = n_RAM_volume;
		Manufacturer = n_Manufacturer;

		CPU_Voltage = n_CPU_Voltage;
		CPU_Temperature = n_CPU_Temperature;
	}

	~Notebook(void)
	{

	}


	int getCPU_Voltage()
	{
		return CPU_Voltage;
	}
	long long getCPU_Temperature()
	{
		return CPU_Temperature;
	}
protected:
	int CPU_Voltage;
	int CPU_Temperature;
};


// TODO: add headers that you want to pre-compile here

#endif //PCH_H
