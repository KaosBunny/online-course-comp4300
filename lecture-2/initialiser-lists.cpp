#include <iostream>
#include <string>

class Foobar
{
    int ic;
    std::string sc;
    float fc;
public:
    Foobar (int i, std::string s, float f) // This will give us our params...
        : ic(i), sc(s), fc(f) // Then this will add all those params to the corresponding variables without excessive copying.
    {
        std::cout << "We just made a foobar. c:" << std::endl;
    }
};

int main()
{
    Foobar fb(1, "1", 1.0);
    return 0;
}
