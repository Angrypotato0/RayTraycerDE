#include "Kamera.hpp"


Kamera::Kamera():
	
			name{"default-cam"},
			angle{1.5707f}, //mit 90° Pi
			eye{glm::vec3(0.0f,0.0f,0.0f)},
			direction{glm::vec3(0.0f,0.0f,-1.0f)},
			up{glm::vec3(0.0f,1.0f,0.0f)}{}
		
Kamera::Kamera(std::string const& name, float fovx):
			name{name},
			angle{angle}, 
			eye{glm::vec3(0.0f,0.0f,0.0f)},
			direction{glm::vec3(0.0f,0.0f,-1.0f)},
			up{glm::vec3(0.0f,1.0f,0.0f)}{}

	