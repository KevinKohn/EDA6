#include "youGo.h"

bool YouGo::isMyTurn(byte_t pcID)
{
	bool ret = false;
	if (pcID == maqOrder[count])
		ret = true;

	return ret;
}


YouGo::YouGo(byte_t _animacion, byte_t *_maqOrder, int nMaqs);
{
	this->animacion = _animacion;
	for (int i = 0; i < nMaqs; i++)
		maqOrder[i] = _maqOrder[i];

}

