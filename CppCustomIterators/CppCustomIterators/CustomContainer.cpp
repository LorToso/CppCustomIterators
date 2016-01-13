#include "CustomContainer.h"

CustomContainer::iterator::iterator(CustomContainer & ContainerParam, size_t index)
	:Container(ContainerParam)
	,nIndex(index)
{
}

int CustomContainer::iterator::operator*() const
{
	switch (nIndex)
	{
	case 0:
		return Container.field1;
	case 1:
		return Container.field2;
	case 2:
		return Container.field3;
	default:
		throw std::out_of_range("Out of Range Exception!");
	}


}

CustomContainer::iterator & CustomContainer::iterator::operator++()
{
	nIndex++;
	return *this;
}

CustomContainer::iterator & CustomContainer::iterator::operator++(int i)
{
	return ++(*this);
}

bool CustomContainer::iterator::operator!=(const iterator & rhs) const
{
	return nIndex != rhs.nIndex;
}

CustomContainer::iterator CustomContainer::begin()
{
	return CustomContainer::iterator(*this, 0);
}

CustomContainer::iterator CustomContainer::end()
{
	return CustomContainer::iterator(*this, size);
}
