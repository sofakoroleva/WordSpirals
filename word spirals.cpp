#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <cmath>

std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry"};

const double PI = 3.14159265358979323846;

int main() {
  std::random_device rd;
  std::mt19937 engine(rd());
  std::uniform_int_distribution<int> dist(0, words.size()-1);

  double angle = 0;
  double angle_step = 2*PI/words.size();
  double radius = 0;
  double radius_step = 0.1;

  for (int i = 0; i < words.size(); i++) {
    double x = radius * cos(angle);
    double y = radius * sin(angle);
    std::cout << words[dist(engine)] << ": (" << x << ", " << y << ")" << std::endl;
    angle += angle_step;
    radius += radius_step;
  }
  return 0;
}
