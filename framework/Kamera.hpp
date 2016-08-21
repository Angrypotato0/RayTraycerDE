#ifndef CAMERA_HPP
#define CAMERA_HPP


#include <glm/vec3.hpp>
#include <string>
#include "Ray.hpp"


struct Kamera
{
	Kamera();
	Kamera(std::string const& name, float fovx);

	std::string name;
	float angle;

 private:

	glm::vec3 eye;
	glm::vec3 direction;
	glm::vec3 up;


};
#endif