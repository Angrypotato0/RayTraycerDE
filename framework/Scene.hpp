#ifndef SCENE_HPP
#define SCENE_HPP

#include <vector>
#include <map>
#include "shape.hpp"
#include "Beleuchtung.hpp"
#include "Kamera.hpp"

struct Scene 
{
	std::vector <std::shared_ptr<Licht>> licht;
	Color ambient;

	// Die Shapes müssen Composite seien. Wenn fertig, Bitte hier einfügen:


	//->																	<-

	std::map<std::string, std::shared_ptr<Material>> materials;

	Kamera kamera;

};
#endif 
