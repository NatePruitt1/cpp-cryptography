#include "Utils.hpp"
#include <cstdint>
#include <vector>

namespace Utils {
static char HexLookup[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                          'A', 'B', 'C', 'D', 'E', 'F'};

std::string BytesToHex(std::vector<uint8_t> data){
  std::string ret(data.size() * 2, '\0');
  std::string::reverse_iterator ret_itr = ret.rbegin();

  for(uint8_t x : data){ 
    size_t index1 = x & 0xFF;
    size_t index2 = (x >> 4) & 0xFF;

    *ret_itr = HexLookup[index1];
    ++ret_itr;
    *ret_itr = HexLookup[index2];
    ++ret_itr;
  }

  return ret;
}

}// namespace Utils
