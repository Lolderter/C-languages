#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    int x = 0;
    std::cout << second::x;
    return 0;
}

/*
int main() {
    using namespace first;

    std::cout << x;
    return 0;
    
    x will be = 1
}*/