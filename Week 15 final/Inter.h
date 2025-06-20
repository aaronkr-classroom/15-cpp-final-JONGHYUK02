#pragma once
// Inter.h

#ifndef GUARD_Inter_h
#define GUARD_Inter_h

#include <iostream>

#include "Core.h"

using namespace std;

class Inter : public Core {
public:
	Inter() : toeik(0) { };
	Inter(istream& is) { read(is); };

	double grade() const override;
	istream& read(istream&)override;

	Inter* clone() const override { return new Inter(*this); }

private:
	double toeik; // Á¹¾÷ ³í¹®
};

#endif