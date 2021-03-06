#ifndef DEF_PHYSIC
#define DEF_PHYSIC

#include <armadillo>

///note файл стандартных физических определений

namespace def
{

const double AIR_DENSITY = 1.225;

const arma::vec GRAVITY_ACCELERATION = arma::colvec({0.0, 0.0, 9.81});

}

#endif // DEF_PHYSIC

