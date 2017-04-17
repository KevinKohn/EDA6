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
	Ip IPobjs[];
	string maqIds[255];		//cambiar 3 por automatico
	int nMaqs=0;
	2tream.open("ip.txt");
	if (IPstream.is_open())
	{
		while (std::getline(IPstream, line))
		{
			maqIds[nMaqs++] = line;

		}
		IPstream.close();
	}
	

}