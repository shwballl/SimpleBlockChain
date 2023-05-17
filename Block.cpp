#include "Block.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <fstream>

Block::Block(std::string data, std::string prevHash) {
    this->data = data;
    this->prevHash = prevHash;
    this->hash = calculateHash();
}

std::string Block::calculateHash() {
    size_t hashValue = std::hash<std::string>{}(prevHash + data);
    std::stringstream ss;
    ss << hashValue;
    return ss.str();
}