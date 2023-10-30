#include <QCoreApplication>
#include "AbstractFactory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    AbstractFactory* factory1 = new ConcreteFactory1();
    AbstractProductA* productA1 = factory1->createProductA();
    AbstractProductB* productB1 = factory1->createProductB();

    productA1->operationA();
    productB1->operationB();

    AbstractFactory* factory2 = new ConcreteFactory2();
    AbstractProductA* productA2 = factory2->createProductA();
    AbstractProductB* productB2 = factory2->createProductB();

    productA2->operationA();
    productB2->operationB();

    delete factory1;
    delete factory2;
    delete productA1;
    delete productB1;
    delete productA2;
    delete productB2;

    return a.exec();
}

