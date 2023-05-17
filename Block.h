#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <fstream>

#pragma once

class Block {
public:
    std::string data;
    std::string prevHash;
    std::string hash;

    Block(std::string data, std::string prevHash);
    std::string calculateHash();
};