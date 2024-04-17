#include <cstdint>
#include <memory>
#include <string>

namespace Key {

class Key {
  protected:
    std::shared_ptr<uint8_t> key_data;
    size_t key_size;
    std::string key_string;

  protected:
    Key(uint8_t* key, size_t key_size);
    Key(std::string key);
    ~Key();
    std::shared_ptr<uint8_t> GetKey();
    std::string GetKeyString();
    size_t GetKeySize();
};

}; //namespace Key
