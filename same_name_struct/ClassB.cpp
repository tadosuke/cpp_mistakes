#include <iostream>

#include "ClassB.h"

namespace ns {

struct S {
	char name = 'B';
};

B::B() {
	S s;
	std::cout << "B = " << s.name << "\n";
}

} // namespace ns
