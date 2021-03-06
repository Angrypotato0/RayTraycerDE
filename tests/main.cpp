#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "shape.hpp"
#include "sphere.hpp"
#include "box.hpp"


 
TEST_CASE("Sphere: get_get_center", "[aufgabe5.2]") {
  Sphere s1 {}; 
  REQUIRE(0.0f == s1.get_center().x);
  REQUIRE(0.0f == s1.get_center().y);
  REQUIRE(0.0f == s1.get_center().z);

  Sphere s2 {{0.4f, 2.3f, 1.2f}, 4.3f};
  REQUIRE(0.4f == s2.get_center().x);
  REQUIRE(2.3f == s2.get_center().y);
  REQUIRE(1.2f == s2.get_center().z);

}

TEST_CASE("Sphere: get_get_rad)", "[aufgabe5.2]") {
  Sphere s1 {}; 
  REQUIRE(0.0f == s1.get_rad());

  Sphere s2 {{0.4f, 2.3f, 1.2f}, -4.3f};
  REQUIRE(-4.3f == s2.get_rad());


}
TEST_CASE("Sphere: set_get_rad)", "[aufgabe5.2]") {
  Sphere s1 {};
  s1.set_rad({0.4f});  
  REQUIRE(0.4f == s1.get_rad());

  Sphere s2 {{0.4f, 2.3f, 1.2f}, -4.3f};
  s2.set_rad({0.7f});
  REQUIRE(0.7f == s2.get_rad());


}
TEST_CASE("Sphere: get area","[aufgabe5.2]"){
  Sphere s1{};
  REQUIRE(0.0f==s1.area());

  Sphere s2 {{0.4f, 2.3f, 1.2f}, 4.3f};
  REQUIRE(Approx(232.3522f) == s2.area());

  Sphere s3 {{6.9f, 4.2f, -1.2f}, -6.9f};
  REQUIRE(Approx(598.2849f) == s3.area());

  Sphere s4 {{6.9f, 4.2f, -1.2f}, 1.25f};
  REQUIRE(Approx(19.635f) == s4.area());
}
TEST_CASE("Sphere: get volume","[aufgabe5.2]"){
  Sphere s1 {};
  REQUIRE(0.0f == s1.volume());

  Sphere s2 {{0.4f, 2.3f, 1.2f}, 4.3f};
  REQUIRE(Approx(333.0381f) == s2.volume());

  Sphere s3 {{6.9f, 4.2f, -1.2f}, -6.9f};
  REQUIRE(Approx(1376.0553f) == s3.volume());

  Sphere s4 {{6.9f, 4.2f, -1.2f}, 1.25f};
  REQUIRE(Approx(8.18123f) == s4.volume());
}

TEST_CASE("Sphere: set_get_center", "[aufgabe5.2]") {
  Sphere s1 {}; 
  s1.set_center({6.9f,6.9f,6.9f});
  REQUIRE(6.9f == s1.get_center().x);
  REQUIRE(6.9f == s1.get_center().y);
  REQUIRE(6.9f == s1.get_center().z);

  Sphere s2 {{0.4f, 2.3f, 1.2f}, 4.3f};
  s2.set_center({});
  REQUIRE(0.0f == s2.get_center().x);
  REQUIRE(0.0f == s2.get_center().y);
  REQUIRE(0.0f == s2.get_center().z);

}
TEST_CASE("Box: get_max", "[aufgabe5.2]") {
  Box b1 {}; 
  REQUIRE(0.0f == b1.get_max().x);
  REQUIRE(0.0f == b1.get_max().y);
  REQUIRE(0.0f == b1.get_max().z);

  Box b2 {{0.4f, 2.3f, 1.2f}, {0.5f, 3.4f, 1.2f}};
  REQUIRE(0.5f == b2.get_max().x);
  REQUIRE(3.4f == b2.get_max().y);
  REQUIRE(1.2f == b2.get_max().z);

}

TEST_CASE("Box: get_min", "[aufgabe5.2]") {
  Box b1 {}; 
  REQUIRE(0.0f == b1.get_min().x);
  REQUIRE(0.0f == b1.get_min().y);
  REQUIRE(0.0f == b1.get_min().z);

  Box b2 {{0.4f, 2.3f, 1.2f}, {0.5f, 3.4f, 1.2f}};
  REQUIRE(0.4f == b2.get_min().x);
  REQUIRE(2.3f == b2.get_min().y);
  REQUIRE(1.2f == b2.get_min().z);



}
TEST_CASE("Box: set_max)", "[aufgabe5.2]") {
  Box b1 {};
  b1.set_max({});  
  REQUIRE(0.0f == b1.get_max().x);
  REQUIRE(0.0f == b1.get_max().y);
  REQUIRE(0.0f == b1.get_max().z);

  Box b2 {{0.4f, 2.3f, 1.2f}, {0.5f, 3.4f, 1.2f}};
  b2.set_max({0.7f, 0.9f, 1.0f});
  REQUIRE(0.7f == b2.get_max().x);
  REQUIRE(0.9f == b2.get_max().y);
  REQUIRE(1.0f == b2.get_max().z);


}
TEST_CASE("Box: set_min", "[aufgabe5.2]") {
  Box b1 {}; 
  b1.set_min({});  
  REQUIRE(0.0f == b1.get_min().x);
  REQUIRE(0.0f == b1.get_min().y);
  REQUIRE(0.0f == b1.get_min().z);

  Box b2 {{0.4f, 2.3f, 1.2f}, {0.5f, 3.4f, 1.2f}};
  b2.set_min({0.7f, 0.9f, 1.0f});
  REQUIRE(0.7f == b2.get_min().x);
  REQUIRE(0.9f == b2.get_min().y);
  REQUIRE(1.0f == b2.get_min().z);

}
TEST_CASE("Box: get area","[aufgabe5.2]"){
  Box b1{};
  REQUIRE(0.0f == b1.area());
  Box b2 {{1.0f, 2.3f, 4.1f}, {0.0f, 2.5f, 1.2f}};
  REQUIRE(Approx(4.24f) == b2.area());

  Box b3 {{-1.0f, -4.3f, 5.6f}, {-9.0f, 1.5f, -2.2f}};
  REQUIRE(Approx(58.48f) == b3.area());

  Box b4 {{-2.8f, 1.1f, -1.9f}, {-3.3f, 6.9f, -4.2f}};
  REQUIRE(Approx(30.18f) == b4.area());
}
TEST_CASE("Box: get volume","[aufgabe5.2"){
  Box b1 {};
  REQUIRE(0.0f == b1.volume());

  Box b2 {{1.0f, 2.3f, 4.1f}, {0.0f, 2.5f, 1.2f}};
  REQUIRE(Approx(0.58f) == b2.volume());

  Box b3 {{-1.0f, -4.3f, 5.6f}, {-9.0f, 1.5f, -2.2f}};
  REQUIRE(Approx(361.92f) == b3.volume());

  Box b4 {{-2.8f, 1.1f, -1.9f}, {-3.3f, 6.9f, -4.2f}};
  REQUIRE(Approx(6.67f) == b4.volume()); 
}
TEST_CASE("Sphere: construktor","[aufgabe5.3]"){
Sphere s1 {};
  REQUIRE(0.0f == s1.get_center().x);
  REQUIRE(0.0f == s1.get_center().y);
  REQUIRE(0.0f == s1.get_center().z);

  REQUIRE(0.0f == s1.get_rad());

  REQUIRE("Sphere" == s1.get_name());

  REQUIRE("Material" == s1.get_matter().name_);
  REQUIRE(0.0f == s1.get_matter().ambient().r);
  REQUIRE(0.0f == s1.get_matter().ambient().g);
  REQUIRE(0.0f == s1.get_matter().ambient().b);
  REQUIRE(0.0f == s1.get_matter().diffuse().r);
  REQUIRE(0.0f == s1.get_matter().diffuse().g);
  REQUIRE(0.0f == s1.get_matter().diffuse().b);
  REQUIRE(0.0f == s1.get_matter().specular().r);
  REQUIRE(0.0f == s1.get_matter().specular().g);
  REQUIRE(0.0f == s1.get_matter().specular().b);
  REQUIRE(0.0f == s1.get_matter().m_);
  
  Sphere s2 {{1.6f, 3.5f, 2.2f}, 46.3f};
  REQUIRE(1.6f == s2.get_center().x);
  REQUIRE(3.5f == s2.get_center().y);
  REQUIRE(2.2f == s2.get_center().z);

  REQUIRE(46.3f == s2.get_rad());

  REQUIRE("Sphere" == s2.get_name());

  REQUIRE("Material" == s2.get_matter().name_);
  REQUIRE(0.0f == s2.get_matter().ambient().r);
  REQUIRE(0.0f == s2.get_matter().ambient().g);
  REQUIRE(0.0f == s2.get_matter().ambient().b);
  REQUIRE(0.0f == s2.get_matter().diffuse().r);
  REQUIRE(0.0f == s2.get_matter().diffuse().g);
  REQUIRE(0.0f == s2.get_matter().diffuse().b);
  REQUIRE(0.0f == s2.get_matter().specular().r);
  REQUIRE(0.0f == s2.get_matter().specular().g);
  REQUIRE(0.0f == s2.get_matter().specular().b);
  REQUIRE(0.0f == s2.get_matter().m_);


  Sphere s3 {"Sphere 3", {"Eisen",{4.9f, 3.2f, 1.2f}, {3.1f, 2.2f, 5.5f}, {6.6f, 6.6f, 6.6f}, 3.4f}, {5.1f, 5.1f, 5.1f}, -6.9f};
  REQUIRE(5.1f == s3.get_center().x);
  REQUIRE(5.1f == s3.get_center().y);
  REQUIRE(5.1f == s3.get_center().z);

  REQUIRE(-6.9f == s3.get_rad());

  REQUIRE("Sphere 3" == s3.get_name());

  REQUIRE("Eisen" == s3.get_matter().name_);
  REQUIRE(4.9f == s3.get_matter().ambient().r);
  REQUIRE(3.2f == s2.get_matter().ambient().g);
  REQUIRE(1.2f == s2.get_matter().ambient().b);
  REQUIRE(3.1f == s2.get_matter().diffuse().r);
  REQUIRE(2.2f == s2.get_matter().diffuse().g);
  REQUIRE(5.5f == s2.get_matter().diffuse().b);
  REQUIRE(6.6f == s2.get_matter().specular().r);
  REQUIRE(6.6f == s2.get_matter().specular().g);
  REQUIRE(6.6f == s2.get_matter().specular().b);
  REQUIRE(3.4f == s2.get_matter().m_);


}
TEST_CASE("Box: construktor","[aufgabe5.3]"){
 Box b1 {};
  REQUIRE(0.0f == b1.get_min().x);
  REQUIRE(0.0f == b1.get_min().y);
  REQUIRE(0.0f == b1.get_min().z);

  REQUIRE(0.0f == b1.get_max().x);
  REQUIRE(0.0f == b1.get_max().y);
  REQUIRE(0.0f == b1.get_max().z);

  REQUIRE("box" == b1.get_name());

  REQUIRE("Material" == b1.get_matter().name_);
  REQUIRE(0.0f == b1.get_matter().ambient().r);
  REQUIRE(0.0f == b1.get_matter().ambient().g);
  REQUIRE(0.0f == b1.get_matter().ambient().b);
  REQUIRE(0.0f == b1.get_matter().diffuse().r);
  REQUIRE(0.0f == b1.get_matter().diffuse().g);
  REQUIRE(0.0f == b1.get_matter().diffuse().b);
  REQUIRE(0.0f == b1.get_matter().specular().r);
  REQUIRE(0.0f == b1.get_matter().specular().g);
  REQUIRE(0.0f == b1.get_matter().specular().b);
  REQUIRE(0.0f == b1.get_matter().m_);


  Box b2 {{1.0f, 2.3f, 4.1f}, {0.0f, 2.5f, 1.2f}};
  REQUIRE(1.0f == b2.get_min().x);
  REQUIRE(2.3f == b2.get_min().y);
  REQUIRE(4.1f == b2.get_min().z);

  REQUIRE(0.0f == b2.get_max().x);
  REQUIRE(2.5f == b2.get_max().y);
  REQUIRE(1.2f == b2.get_max().z);

  REQUIRE("box" == b2.get_name());

  REQUIRE("Material" == b2.get_matter().name_);
  REQUIRE(0.0f == b2.get_matter().ambient().r);
  REQUIRE(0.0f == b2.get_matter().ambient().g);
  REQUIRE(0.0f == b2.get_matter().ambient().b);
  REQUIRE(0.0f == b2.get_matter().diffuse().r);
  REQUIRE(0.0f == b2.get_matter().diffuse().g);
  REQUIRE(0.0f == b2.get_matter().diffuse().b);
  REQUIRE(0.0f == b2.get_matter().specular().r);
  REQUIRE(0.0f == b2.get_matter().specular().g);
  REQUIRE(0.0f == b2.get_matter().specular().b);
  REQUIRE(0.0f == b2.get_matter().m_);


  Box b3 {"box 3",{"Glass",{1.0f, 2.3f, 4.1f},{0.0f, 2.5f, 1.2f},{3.1f, 5.0f, 0.1f}, 2.3f},{1.0f, 2.3f, 4.1f}, {0.0f, 2.5f, 1.2f}};
  REQUIRE(1.0f == b3.get_min().x);
  REQUIRE(2.3f == b3.get_min().y);
  REQUIRE(4.1f == b3.get_min().z);

  REQUIRE(0.0f == b3.get_max().x);
  REQUIRE(2.5f == b3.get_max().y);
  REQUIRE(1.2f == b3.get_max().z);

  REQUIRE("box 3" == b3.get_name());

  REQUIRE("Glass" == b3.get_matter().name_);
  REQUIRE(1.0f == b3.get_matter().ambient().r);
  REQUIRE(2.3f == b3.get_matter().ambient().g);
  REQUIRE(4.1f == b3.get_matter().ambient().b);
  REQUIRE(0.0f == b3.get_matter().diffuse().r);
  REQUIRE(2.5f == b3.get_matter().diffuse().g);
  REQUIRE(1.2f == b3.get_matter().diffuse().b);
  REQUIRE(3.1f == b3.get_matter().specular().r);
  REQUIRE(5.0f == b3.get_matter().specular().g);
  REQUIRE(0.1f == b3.get_matter().specular().b);
  REQUIRE(2.3f == b3.get_matter().m_);
}

TEST_CASE("Box + Sphere: print","[aufgabe5.5]"){
  Sphere s1 {{0.4f, 2.3f, 1.2f}, 4.3f};
  std::cout << s1 << std::endl;

  Sphere s2 {"Sphere 2", {"Eisen", {1.0f, 2.2f, 4.2f}, {3.3f, 4.4f, 5.5f}, {3.1f, 5.0f, 0.1f}, 3.2f}, {6.9f, 4.2f, -1.2f}, -6.9f};
  std::cout << s2 << std::endl;

  Box b1 {{1.2f, 4.3f, 66.6f}, {3.2f, 5.5f, 8.8f}};
  std::cout << b1 <<  std::endl;

  Box b2 {"box 2", {1.0f, 0.3f, 0.5f}, {-1.0f, -4.3f, 5.6f}, {-9.0f, 1.5f, -2.2f}};
  std::cout << b2 <<  std::endl;

  auto b3 = std::make_shared<Box>(Box{"Schachtel", {}, {-1.0f, -4.3f, 5.6f}, {-9.0f, 1.5f, -2.2f}});
  b3 -> print(std::cout);
  std::cout << std::endl;

}
TEST_CASE("intersectRaySphere", "[aufgabe5.6]") {
  
  glm::vec3 ray_origin{0.0f, 0.0f, 0.0f};
  glm::vec3 ray_direction{0.0f, 0.0f, 1.0f};
  glm::vec3 sphere_center{0.0f, 0.0f, 5.0f};
  float sphere_radius{1.0f};

  float distance{0.0f};
  auto result = glm::intersectRaySphere(ray_origin, ray_direction,sphere_center,sphere_radius * sphere_radius,distance);

  REQUIRE(distance == Approx(4.0f));

}
TEST_CASE("Destruktor", "[aufgabe5.8]"){
  Material mat("Eisen", {1.0f, 2.2f, 4.2f}, {3.3f, 4.4f, 5.5f}, {3.1f, 5.0f, 0.1f}, 3.2f);
  glm::vec3 position(0, 0, 0);

  Sphere* s0 = new Sphere("sphere0", mat, position, 1.2); 
  Shape* s1 = new Sphere("sphere1", mat, position, 1.2); 

  std::cout << std::endl;
  s0 -> print(std::cout); 
  std::cout << std::endl;
  s1 -> print(std::cout);
  std::cout << std::endl;

  delete s0; 
  delete s1;
}




int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
