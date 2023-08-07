#pragma once
template<typename T>
class OOPClass
{
	T mValue;

public:
	void function(T arg);
};

template<typename T>
void OOPClass<T>::function(T arg)
{
	T temp = arg;
	temp += arg;
}
