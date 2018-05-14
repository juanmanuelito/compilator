/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Objects.h
 * Author: jmendieta
 *
 * Created on 9 de mayo de 2018, 02:19 PM
 */
#include <string>
#ifndef OBJECTS_H
#define OBJECTS_H
using namespace std;
class Objects {
public:
    virtual string build();
	Objects();
    Objects(const Objects& orig);
    virtual ~Objects();
private:

};

#endif /* OBJECTS_H */

