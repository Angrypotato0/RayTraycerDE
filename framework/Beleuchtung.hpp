#ifndef BELEUCHTUNG.HPP
#define BELEUCHTUNG.HPP


#include <glm/vec3.hpp>
#include "color.hpp"
#include <string>

struct Licht 
{
	Licht():
	name{"default"}, color{}, point{0.0}{}
	Licht(std::string const& name_, Color const& color_, glm::vec3 const point_):
	name{name_}, color{color_}, point{point_}{}


	std::string name;
	glm::vec3 point;
	Color color;

};
#endif
