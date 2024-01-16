#pragma once
#include <UnitTest++/UnitTest++.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <locale>
#include <codecvt>
#include <algorithm>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class modAlphaCipher
{
    
private:
    int kolvostolbov;
    
public:
    modAlphaCipher() = delete;
    modAlphaCipher(const int& key) :kolvostolbov(key) {};    //конструктор
    string encrypt(const string& open_stroka);               //зашифрование
    string decrypt(const string& cipher_stroka);             //расшифрование
    string getValidText(const std::string & s);
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class cipher_error: public std::invalid_argument
{
    
public:
    explicit cipher_error (const std::string& what_arg):
        std::invalid_argument(what_arg) {}
    explicit cipher_error (const char* what_arg):
        std::invalid_argument(what_arg) {}
};
