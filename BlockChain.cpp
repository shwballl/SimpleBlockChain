#include "BlockChain.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <fstream>

Blockchain::Blockchain() {
    chain.push_back(Block("Genesis block", "0"));
}

void Blockchain::addBlock(std::string data) {
    std::string prevHash = chain.back().hash;
    chain.push_back(Block(data, prevHash));
}
