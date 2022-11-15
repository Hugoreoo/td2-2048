#include "Case.h"

Case::Case(int value) : _value(value) {}

const int &Case::getValue() const {
	return _value;
}