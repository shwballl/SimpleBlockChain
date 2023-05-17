#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <fstream>
#include "Block.h"

#pragma once

class Blockchain {
public:
    std::vector<Block> chain;

    Blockchain();

    void addBlock(std::string data);
};