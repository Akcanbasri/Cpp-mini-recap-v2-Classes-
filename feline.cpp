#include "feline.h"

Feline::Feline(QObject *parent) : Mammal{parent} {
    qInfo() << this << "Constructed";
}

void Feline::meow() { qInfo() << this << "Meow"; }
