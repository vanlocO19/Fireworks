#ifndef _PARTICLE_H_
#define _PARTICLE_H_

#include <SFML/Graphics.hpp>

class Particle {
private:
    sf::Color _color;

    sf::Vector2f _position;

    float _alphaSub;

    unsigned short int _tick;
public:
    Particle(sf::Vector2f ,sf::Color);

    ~Particle();

    sf::Color getColor();

    sf::Vector2f getPosition ();

    bool poll();
};

#endif // _PARTICLE_H_
