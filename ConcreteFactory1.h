#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override;
    AbstractProductB* createProductB() override;
};

#endif // CONCRETEFACTORY1_H
