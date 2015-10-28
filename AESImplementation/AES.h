#ifndef AES_ENC_H
#define AES_ENC_H

#include "Structure.h"
#include "KeyShedule.h"

class AES
{
public:
	static void encrypt(State &state, Key &privateKey, KeyLength length);

	static void encrypt(State &state, BYTE bytes[16], BYTE privateKey[16], KeyLength length);

	static void decrypt(State &state, BYTE bytes[16], BYTE privateKey[16], KeyLength length);

	static void decrypt(State &state, Key &privateKey, KeyLength length);

	static int getNumRounds(KeyLength length);
};

#endif