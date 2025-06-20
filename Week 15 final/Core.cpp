// Core.cpp
#include <string>
#include <sstream>
#include "Core.h"
#include "grade.h"

using namespace std;

// Core 클래스의 멤버 함수 정의문
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		hw.clear();

		double x;
		string line;
		getline(in, line);

		istringstream iss(line);
		while (iss >> x)
			hw.push_back(x);
	}
	return in;
}

string Core::getName() const { return name; }

double Core::grade() const {
	return ::grade(midterm, final, homework);
}

istream& Core::read_common(istream& in) {
	// 학생 이름과 시험 정수를 입력받아 저장
	in >> name >> midterm >> final;
	return in;
}

istream& Core::read(istream& in) {
	read_common(in);
	read_hw(in, homework); // Student_info.h에 있다
	return in;
}

// 비멤버 함수 정의
bool compare(const Core& c1, const Core& c2) {
	return c1.getName() < c2.getName();
}

bool compare_grades(const Core& c1, const Core& c2) {
	return c1.grade() < c2.grade();
}

bool compare_Core_ptrs(const Core* cp1, const Core* cp2) {
	return compare(*cp1, *cp2);
}
