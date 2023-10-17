//spyder開いているとビルドエラー

#include <pybind11/pybind11.h>
#include <iostream>

using namespace std;

int jyo(int x, int y) 
{
    int z = x * y;
    return z;
} 

int print(void) 
{
    cout << "print test" << endl;
    return 0;
}

PYBIND11_MODULE(Mymodule, m) 
{
    m.def("kakeru", &jyo);
    m.def("print", &print);
}

