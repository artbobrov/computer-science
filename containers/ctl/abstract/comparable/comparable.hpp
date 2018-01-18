//
// Created by Artem Bobrov on 15.01.2018.
//

#ifndef CONTAINERS_COMPARABLE_HPP
#define CONTAINERS_COMPARABLE_HPP

namespace ctl {
	template<class Container>
	class comparable {
	public:
		typedef Container container;
	public:
		virtual bool operator<(const container &other) = 0;
		virtual bool operator<=(const container &other) = 0;

		virtual bool operator>(const container &other) = 0;
		virtual bool operator>=(const container &other) = 0;

	};

}

#endif //CONTAINERS_COMPARABLE_HPP
