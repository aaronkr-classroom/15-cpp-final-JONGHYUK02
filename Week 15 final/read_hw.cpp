// read_hw.cpp
#include <iostream>
#include <vector>
#include <string>

#include "Vec.h"
using namespace std;

istream& read_hw(istream& in, Vec<double>& hw) {
	if (in) {
		hw.clear(); // 이전 것 삭제

		double x;
		while (in >> x)
			hw.push_back(x);

		// 스트림 다시 삭제 (다음 학생 위해)
		in.clear();

		string rest_of_line;
		getline(in, rest_of_line);
	}
	return in;
}