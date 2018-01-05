//
// Created by Artem Bobrov on 05.01.2018.
//

#include "profiler.hpp"
void debug::profiler::start() {
	_start = clock::now();
}
void debug::profiler::finish() {
	_finish = clock::now();

}
const double debug::profiler::time() const noexcept {
	return std::chrono::duration_cast<duration_time>(_finish - _start).count();
}
void debug::profiler::clear() {
	_start = _finish = time_point();
}
