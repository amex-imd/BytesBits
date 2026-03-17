#include <iostream>
#include "bytesbits.h"
#include <vector>

int main()
{
    short val = 316;

    IMD::BIG_ENDIAN::print_bin_bytes(val);
    std::cout << std::endl;

    std::vector<int> vec = {0, 0, 0, 0, 0, 0, 0, 1,
                            0, 0, 1, 1, 1, 1, 0, 0};

    std::cout << IMD::BIG_ENDIAN::restore_value_from_bits<short>(vec.begin(), vec.end());

    std::cin.get();
    return 0;
}