#pragma once
#include <string.h>
#include <fstream>
typedef char byte_t;

class YouGo
{
public:
	bool isMyTurn(byte_t pcID); // recibe clase ip
	YouGo(byte_t _animacion, byte_t _maqOrder, int nMaqs);

private:
	int nMaqs;
	byte_t animacion;
	byte_t count;
	byte_t *maqOrder;

}


