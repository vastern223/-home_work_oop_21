#pragma once
#include<iostream>

using namespace std;
namespace Ukraine
{
	class capitals_of__Kyiv
	{
		int people;
	public:

		capitals_of__Kyiv() :people(0) { }

		capitals_of__Kyiv(int people) : people(people) { }

		int Get_people()const
		{
			return people;
		}
	};

}
