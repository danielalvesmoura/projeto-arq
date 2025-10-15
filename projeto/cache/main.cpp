#include <iostream>
#include <cstdint>

#include <my-lib/bit.h>

#include <vector>

using BitSet = Mylib::BitSet<32>;

bool checaMemoria(BitSet dado, std::vector<BitSet> memoria)
{
	bool esta = false;

	for (int i = 0; i < 5; i++)
	{
		if (memoria[i] == dado)
		{
			esta = true;
		}
	}

	return esta;
}

int main (int argc, char **argv)
{
	std::vector<BitSet> memoria(5);

	memoria[3] = 2;

	std::cout << checaMemoria(00000000000000000000000000000010, memoria) << std::endl;

	return 0;
}

