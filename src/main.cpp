#include <iostream>
#include "bytesbits.h"
#include <vector>

int main()
{
    short val = 316;

    IMD::LITTLE_ENDIAN::print_bin_bytes(val);
    std::cout << std::endl;

    std::vector<int> vec = {0, 0, 1, 1, 1, 1, 0, 0,
                            0, 0, 0, 0, 0, 0, 0, 1};

    auto v = IMD::LITTLE_ENDIAN::restore_value_from_bits<short>(vec.begin(), vec.end());
    std::cout << v << std::endl;
    IMD::LITTLE_ENDIAN::print_bin_bytes(v);

    std::cin.get();

    return 0;
}