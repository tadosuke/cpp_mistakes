#include <iostream>

#include "ClassA.h"

namespace ns {

struct S {
	char name = 'A';
};

A::A() {
	S s;
	std::cout << "A = " << s.name << "\n";
}

} // namespace ns
