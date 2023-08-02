#include <iostream>


int main()
{
	
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
	std::cout << "Àü»ç´Â Ä®À» ÈÖµÑ·¶´Ù" << std::endl;
	}
	void DoubleSlash() const
	{
	std::cout << "µÎ¹ø °ø°Ý" << std::endl;
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