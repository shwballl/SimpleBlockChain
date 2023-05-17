#include "Block.h"
#include "BlockChain.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <fstream>

using namespace std;


int main() {
    Blockchain myChain;
    ofstream os;
    os.open("Blockchain.txt");
    myChain.addBlock("First block");
    myChain.addBlock("Second block");
    myChain.addBlock("Nazar");
    for (int i = 0; i < 100; i+=10)
    {
      myChain.addBlock("Hi: " + (char)i);
    }

    for (const auto& block : myChain.chain) {
        os << "Data: " << block.data << endl;
        os << "Previous hash: " << block.prevHash << endl;
        os << "Hash: " << block.hash << endl << endl;
    }

    os.close();
    return 0;
}