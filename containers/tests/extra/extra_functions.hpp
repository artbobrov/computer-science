//
// Created by Artem Bobrov on 15.03.2018.
//

#ifndef TESTS_EXTRA_FUNCTIONS_HPP
#define TESTS_EXTRA_FUNCTIONS_HPP
#include <string>
#include <random>

namespace std {
	template<class Key, class Value>
	std::string to_string(const std::pair<Key, Value> &__pair) {
		return string('{' + to_string(__pair.first) + ',' + to_string(__pair.second) + '}');
	}
}

template<class Key, class Value>
bool operator==(const std::pair<Key, Value> &__x, const std::pair<Key, Value> &__y) {
	return __x.first == __y.first && __x.second == __y.second;
}
template<class Key, class Value>
bool operator!=(const std::pair<Key, Value> &__x, const std::pair<Key, Value> &__y) {
	return !(__x == __y);
}
using std::cout;
using std::cerr;
using std::endl;

template<class T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec) {
	for (auto &value: vec)
		os << value << " ";

	return os;
}
template<class T>
std::ostream &operator<<(std::ostream &os, const std::list<T> &vec) {
	for (auto &value: vec)
		os << value << " ";

	return os;
}
#endif //TESTS_EXTRA_FUNCTIONS_HPP