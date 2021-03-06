#pragma once

#include <knapsack/particle.h>

namespace particle {
    void update();
    void render();
    void add(ParticleSource* p);
    void remove(ParticleSource* p);
}