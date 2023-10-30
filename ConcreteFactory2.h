#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H

#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override;
    AbstractProductB* createProductB() override;
};

#endif // CONCRETEFACTORY2_H
