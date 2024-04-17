#include "Key.hpp"
#include <cstddef>
#include <cstdint>

namespace Key {

Key::Key(uint8_t key_data, size_t key_size) {
  this->key_data(new uint8_t[key_size]);
  this->key_size = key_size;
  this->key_string
}

} // namespace Key
