// Inter.cpp
#include "Inter.h"

using namespace std;

double Inter::grade() const {
    return min(Core::grade(), toeik);
}

istream& Inter::read(istream& in) {
    Core::read(in);
    in >> toeik;
    return in;
}