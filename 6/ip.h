#pragma once

typedef char byte_t;

class Ip
{
private:
	byte_t ipField[4];
};

void assignMaqId()
{
	ifstream IPstream;
	string line;
	Ip IPobj[]
	string maqIds[255];		//cambiar 3 por automatico
	int nMaqs=0;
	IPstream.open("ip.txt");
	if (IPstream.is_open())
	{
		while (std::getline(IPstream, line))
		{
			maqIds[nMaqs++] = line;

		}
		IPstream.close();
	}
	

}