#ifndef CONSUMPTION_H
#define CONSUMPTION_H

#include "def/def.h"
#include "model.h"

namespace con
{
    void no_consuption(Fuselage& fuselage, Parafoil& parafoil, State& state) { }

    void linear_consuption(Fuselage& fuselage, Parafoil& parafoil, State& state)
    {
        const double alpha = 0.0739668225475;
        state.fuel -= state.time_step * alpha;
    }

    void linear_thrust_depended_consuption(Fuselage& fuselage, Parafoil& parafoil, State& state)
    {
        const double alpha = 0.0192482091823;
        state.fuel -= state.time_step * alpha * fuselage.get_state().thrust;
    }

}

#endif // CONSUMPTION_H
