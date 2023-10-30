#include "ConcreteFactory2.h"

AbstractProductA* ConcreteFactory2::createProductA() {
    return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::createProductB() {
    return new ConcreteProductB2();
}
