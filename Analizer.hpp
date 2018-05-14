//
//  Analizer.hpp
//  compilator
//
//  Created by Juan manuel Mendieta on 6/05/18.
//  Copyright © 2018 Juan manuel Mendieta. All rights reserved.
//

#ifndef Analizer_hpp
#define Analizer_hpp
#include <string>
#include <stdio.h>
using namespace std;
class Analizer{
public:
    bool isResevate(string word);
    void analizeWord(string word);
};
#endif /* Analizer_hpp */
