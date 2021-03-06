#ifndef Particle_hh
#define Particle_hh

#include <iostream>

extern const int minColumn;
extern const int maxColumn;

class Screen;

class Particle {
public:
  Particle() : symbol('x'), position(0), speed(0) {}
  Particle(char s, double p, double sp) : symbol(s), position(p), speed(sp) {}
  Particle& operator=(const Particle& other);
  void draw(Screen& screen) const;
  virtual void move() = 0;
  friend std::istream& operator>>(std::istream& in, Particle& p);
  virtual ~Particle() {}
  void repr();
private:
  char symbol;
protected:
  double position;
  double speed;
};

#endif // Particle_hh
