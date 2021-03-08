#include "json.hpp"
#include<iostream>
#include <fstream>
// for convenience
using json = nlohmann::json;
json j2 = {
  {"pi", 3.141},
  {"happy", true},
  {"name", "Niels"},
  {"nothing", nullptr},
  {"answer", {
    {"everything", 42}
  }},
  {"list", {1, 0, 2}},
  {"object", {
    {"currency", "USD"},
    {"value", 42.99}
  }}
};
int main()
{
	std::ofstream o("pretty.json");
o << j2 << std::endl;
}
