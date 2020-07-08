#include <iostream>
#include "Alexandria_Lighthouse.h"
#include "Colossus_of_Rhodes.h"
#include "Hanging_gardens_of_Semiramis.h"
#include "Mausoleum_in_Halicarnassus.h"
#include "Pyramid_of_Cheops.h"
#include "Statue_of_Zeus_in_Olympia.h"
#include "Temple_of_Artemis.h"
#include "Capitals_of_Warsaw.h"
#include "Capitals_of__Kyiv.h"
#include "Capitals_of_Moscow.h"

using namespace std;



void Population_comparison(Ukraine::capitals_of__Kyiv &ky,Moscow::capitals_of_Moscow &ms,Poland::capitals_of_Warsaw& wa)
{
	if (ky.Get_people() > ms.Get_people() && ky.Get_people() > wa.Get_people())
	{
		cout << "Most people live in Kyiv: " << ky.Get_people() << endl;
	}
	else if(ms.Get_people() > ky.Get_people() && ms.Get_people() > wa.Get_people())
	{
		cout << "Most people live in Moscow: " << ms.Get_people() << endl;
	}
	else if (wa.Get_people() > ky.Get_people() && wa.Get_people() > ms.Get_people())
	{
		cout << "Most people live in Warsaw: " << wa.Get_people() << endl;
	}
}

int main()
{

	Ukraine::capitals_of__Kyiv ky(600);
	Moscow::capitals_of_Moscow ms(10);
	Poland::capitals_of_Warsaw wa(202);

	Population_comparison( ky,ms,wa);


	system("pause");
	return 0;
}

