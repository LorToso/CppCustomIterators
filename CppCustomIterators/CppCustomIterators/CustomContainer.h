#pragma once
#include <iterator>

class CustomContainer
{
public:
	CustomContainer() = default;
	~CustomContainer() = default;
private:
	int field1 = 1;
	int field2 = 2;
	int field3 = 3;
	size_t size = 3;

public:
	class iterator : public std::iterator<std::output_iterator_tag, int>
	{
	public:
		explicit iterator(CustomContainer & Container, size_t index = 0);
		int operator*() const;
		iterator & operator++();
		iterator & operator++(int);
		bool operator!=(const iterator &) const;
	private:
		size_t nIndex = 0;
		CustomContainer & Container;
	};

	iterator begin();
	iterator end();
};

