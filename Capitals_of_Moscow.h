#pragma once
#include<iostream>
using namespace std;

namespace Moscow
{
	class capitals_of_Moscow
	{
		int people;
	public:

		capitals_of_Moscow() :people(0) { }

		capitals_of_Moscow(int people) :people(people) { }

		int Get_people()const
		{
			return people;
		}
	};
}

