#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    std::string str = "Hello Git!";
    std::string str_2="";
    for (int i = 0; i < 5; i++)
    {
        std::cout << str << std::endl;
    }
    for (int i = 0; i < str.size(); i++)
    {
        str_2.resize(str.size());
        str_2[i] = str[i];
        std::cout << (str_2)<<std::endl;
        Sleep(500);
    }
    
}
