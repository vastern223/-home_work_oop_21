#pragma once
#include<iostream>

using namespace std;
namespace  Poland
{
	class capitals_of_Warsaw
	{
		int people;
	public:

		capitals_of_Warsaw() :people(0) { }

		capitals_of_Warsaw(int people) :people(people) { }

		int Get_people()const
		{
			return people;
		}
	};
}
