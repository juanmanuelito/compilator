//
//  Tree.hpp
//  compilator
//
//  Created by Juan manuel Mendieta on 6/05/18.
//  Copyright © 2018 Juan manuel Mendieta. All rights reserved.
//
#include <string>
#ifndef Tree_hpp
#define Tree_hpp
using namespace std;
#include <stdio.h>
using namespace std;
class Tree{
private:
    string **arbol;
    int current;
public:
    void addRight(string);
    void addLeft(string);

};
#endif /* Tree_hpp */
