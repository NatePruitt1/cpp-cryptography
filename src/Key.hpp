#include <cstdint>
#include <string>
#include <vector>

namespace Key {

class Key {
  protected:
    std::vector<uint8_t> key_data;
    std::string key_string;

  protected:
    Key(uint8_t* key, size_t key_size);
    Key(std::string key);
    ~Key();
    std::vector<uint8_t> GetKey();
    std::string GetKeyString();
    size_t GetKeySize();
};

}; //namespace Key
