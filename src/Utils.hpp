#include <cstdint>
#include <memory>
#include <string>

namespace Utils {

std::string BytesToHex(std::shared_ptr<uint8_t> data, size_t size);

}// namespace Utils
