#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "node.h"
#include "quadtree.h"

int main() {

    std::ifstream file;
    file.open("../BetterQuadTreeBits/matrix.txt");

    if (file.is_open()) {
       std::string matrix;
       std::stringstream ss;
       ss << file.rdbuf();
       matrix = ss.str();

       Quadtree q = Quadtree::Construct(matrix);
       Quadtree square = q * q;
       std::cout << "Max usage in vanilla scenario: " << Quadtree::maxUsage << "\n";
    }

    file.close();

}
