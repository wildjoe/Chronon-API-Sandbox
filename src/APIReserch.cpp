// APIReserch.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "IAPI/iJsonAPI.h"

using namespace std;


int main()
{
	try {

		std::vector<int8_t>	buff(10);
		auto api = ChronoAPI_1_0::IAPI<ChronoAPI_1_0::JsonCommands>();
		try {
			api.push("id", buff);

		}
		catch (ChronoAPI_1_0::APIError apierror) {
			std::cout << "api error " << static_cast<int>(apierror);
		}
		catch (std::exception e) {
			std::cout << e.what();
		}
	}
	catch (...) {
	
		std::cout << "exception";
	}

	return 0;
}
