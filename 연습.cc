#include <iostream>
using namespace std;

int main()

{
    string str = "MangoBanana";
    str.replace(5, 6, "Apple");
    // str.append("하세요");    // 안녕하세요

    std:: cout << str;
}