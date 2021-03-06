#ifndef SPHERE_HPP
#define SPHERE_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>
#include "Ray.hpp"



class Sphere : public Shape 
 {
 public:
 	Sphere();
 	Sphere(glm::vec3 const& center, float rad );
 	Sphere(std::string const& name, Material const& mat, glm::vec3 const& center ,float rad);
 	~Sphere() override;
 	float area() const  ;
 	float volume() const  ;
 	glm::vec3 const& get_center() const;
 	float get_rad() const;
 	void set_rad (float const& rad);
 	void set_center (glm::vec3 const& center);
 	std::ostream& print(std::ostream& os) const override;
 	bool intersect(Ray const& r, float& d) const;
 private:
 	glm::vec3 center_;
 	double rad_;
};
 #endif   