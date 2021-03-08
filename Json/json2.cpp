#include "json.hpp"
#include<iostream>
#include <fstream>

// for convenience
using json = nlohmann::json;

json j3={ "balaji.sivakumar@curneu.com", { "userBasicDetails", { "userId", "IND0001", "Email", "balaji@curneu.com", "Country", "India", "HospitalName", "CMC", "Password", "K@123", "UserGender", "Male", "UserName", "BalajiSivakumar" } } };
int main()
{
	std::ofstream o("Output.json");
	o << j3 << std::endl;
}
