#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
    virtual ~AbstractFactory() {};
};

#endif // ABSTRACTFACTORY_H
