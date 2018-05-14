//
//  Reader.cpp
//  compilator
//
//  Created by Juan manuel Mendieta on 6/05/18.
//  Copyright © 2018 Juan manuel Mendieta. All rights reserved.
//

#include "Reader.hpp"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
bool Reader::readFile(string Rute){
    fstream file;
    file.open(Rute.c_str());
    if(file.fail()){
        cerr << "Error to read the file"<<endl;
        return false;
    }
    string item;
    int items=0;
    while (!file.eof()) {
        file >> item;
        cout << item<<endl;
        file >> item;
        cout <<"next item"+item<<endl; 
        items++;
    }
    return true;
        
}
