#include <string>

namespace tmplt {

template <typename T>
struct ExampleClass {
public:
    ExampleClass() : msg("Hello, world") {}
    inline T GetMsg() { return msg; };
private:
    T msg;
};

}  // namespace tmplt