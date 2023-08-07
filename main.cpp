#include <iostream>
#include "OOPClass.h"

int main() 
{
	OOPClass<int> c1;
	c1.function(10);
}


/*
	#include <iostream>

class Character
{
protected:
	int mHP;

public:
	Character() : mHP{100} {}
	virtual ~Character() {}
	
	virtual void Attack() const{}
	virtual void Dead() const{}

public:
	virtual void Attack() const
	{
		std::cout << "UnKnown" << std::endl;
	}
};

class Warrior : public Character
{
public:
	Warrior()
	{
		std::cout << "[+] Warrior Created" << std::endl;
	}
	~Warrior()
	{
		std::cout << "[-] Warrior Created" << std::endl;
	}
public:
	void Attack() const override
	{
	std::cout << "전사는 칼을 휘둘렀다" << std::endl;
	}
	void DoubleSlash() const
	{
	std::cout << "두번 공격" << std::endl;
	}
};

class Wolf :public Character
{
public:
	void Attack() const override
	{

	}

	void Dead() const override
	{

	}
};

int main()
{
	Character* p = new Warrior;
	p->Attack();
	p->Dead();
	//((Warrior*)p)->DoubleSlash();
	Warrior* wp = dynamic_cast<Warrior*>(p);
	if (wp)
	{
		wp->DoubleSlash();
	}
	else
	{
		std::cerr << "warrio type" << std::endl;
	}
	delete p;
}
*/

/*
	using FunctionPtr = int(*)(float, int); // c++
typedef int (*FPtr)(float, int); // c
int MyFunction(float arg1, int arg2)
{
	std::cout << arg1 << "," << arg2 << std::endl;
	return 0;
}

int main()
{
	int (*p)(float, int);
	p = &MyFunction;
	(*p)(1.1f, 1);

	FunctionPtr p2;
	p2 = MyFunction;
	p2(1.1f, 1);

	FPtr p3;
	p3 = MyFunction;
	p3(1.1f, 1);
}

*/

/*
	#include <iostream>

class MyClass
{
public:
	int MyMemberFunction(float x) 
	{
		std::cout << "멤버함수 호출" << std::endl;
		return 0;
	}
	static float MyStaticFunction(int x)
	{
		std::cout << "정적함수 호출" << std::endl;
		return 0.0f;
	}
};

using FPtr1 = int (MyClass::*)(float);
using FPtr2 = float (*)(int);

int main()
{
	MyClass c;
	FPtr1 p1 = &MyClass::MyMemberFunction;
	(c.*p1)(1.1f);

	FPtr2 p2 = &MyClass::MyStaticFunction;
	p2(1);
}
*/

/*
	template<typename T>
T Sum(T x, T y)
{
	T sum;
	sum = x + y;
	return sum;
}

int main()
{
	//암시적 표기법
	std::cout << Sum(1,1) << std::endl;
	std::cout << Sum(1.1f, 1.f) << std::endl;
	std::cout << Sum('A','B') << std::endl;

	//명시적 표기법
	std::cout << Sum<int>(1,1) << std::endl;
}
*/

/*
	#include <iostream>

template<typename T>
void Sort(T* array, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

template<typename F>
void Print(F* array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
	std::cout << std::endl;
}

int main() {
    int array1[]{1, 2, 3, 5, 4};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);
    Sort(array1, size1);
    Print(array1, size1);

    float array2[]{1.1f, 2.5f, 3.0f, 5.1f, 4.4f};
    size_t size2 = sizeof(array2) / sizeof(array2[0]);
    Sort(array2, size2);
    Print(array2, size2);
}
*/

/*
	template<typename T>
class OOPClass
{
public:
	void function(T arg);
};


int main() 
{
	OOPClass<int> c1;
	c1.function(1);
}

template<typename T>
class OOPClass<T>::function(T arg)
{
	T temp = arg;
	temp += arg;
};
*/