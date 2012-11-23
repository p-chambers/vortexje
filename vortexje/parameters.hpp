//
// Vortexje -- Numerical simulation parameters.
//
// Copyright (C) 2012 Baayen & Heinz GmbH.
//
// Authors: Jorn Baayen <jorn.baayen@baayen-heinz.com>
//

#ifndef __PARAMETERS_HPP__
#define __PARAMETERS_HPP__

namespace Vortexje
{

/**
   Parameter settings.
   
   The static parameters of this class control the behavior of the solver.
   
   @brief Parameter settings.
*/
class Parameters
{
public:
    /**
       Maximum number of iterations of BiCGSTAB linear solver.
    */
    static int    linear_solver_max_iterations;
    
    /**
       Tolerance of BiCGSTAB linear solver.
    */
    static double linear_solver_tolerance;
    
    /**
       Whether or not to apply the unsteady Bernoulli equation.
    */
    static bool   unsteady_bernoulli;
    
    /**
       Whether or not to enable wake relaxation/convection.
    */
    static bool   convect_wake;
    
    /**
       Length of the wake, in case of no wake convection.
    */
    static double static_wake_length;
    
    /**
       Minimum pressure coefficient, below which a warning is issued.
    */
    static double min_pressure_coefficient;
    
    /**
       Kinematic viscosity of the fluid.
    */
    static double fluid_kinematic_viscosity;
    
    /**
       Whether or not to use the Ramasamy-Leishman vortex sheet model.
       
       @note See M. Ramasamy and J. G. Leishman, Reynolds Number Based Blade Tip Vortex Model, University of Maryland, 2005.
    */
    static bool   use_ramasamy_leishman_vortex_sheet;
    
    /**
       Initial vortex filament radius, when using the Ramasamy-Leishman vortex sheet model.
       
       @note See M. Ramasamy and J. G. Leishman, Reynolds Number Based Blade Tip Vortex Model, University of Maryland, 2005.
    */
    static double initial_vortex_core_radius;
    
    /**
       Minimum vortex filament radius, when using the Ramasamy-Leishman vortex sheet model.
       
       @note See M. Ramasamy and J. G. Leishman, Reynolds Number Based Blade Tip Vortex Model, University of Maryland, 2005.
    */
    static double min_vortex_core_radius;

    /**
       Lamb's constant from the Ramasamy-Leishman vortex sheet model.
       
       @note See M. Ramasamy and J. G. Leishman, Reynolds Number Based Blade Tip Vortex Model, University of Maryland, 2005.
    */
    static double lambs_constant;
    
    /**
       a' constant from the Ramasamy-Leishman vortex sheet model.
       
       @note See M. Ramasamy and J. G. Leishman, Reynolds Number Based Blade Tip Vortex Model, University of Maryland, 2005.
    */
    static double a_prime;
    
    /**
       Interpolation layer thickness for evaluation of panel influence and induced velocities close to the body.
       
       @note See K. Dixon, C. S. Ferreira, C. Hofemann, G. van Brussel, G. van Kuik,
       A 3D Unsteady Panel Method for Vertical Axis Wind Turbines, DUWIND, 2008.
    */
    static double interpolation_layer_thickness;
    
    /**
       Interpolation layer trailing edge nodge angle for evaluation of panel influence and induced velocities close to the body.
       
       @note See K. Dixon, C. S. Ferreira, C. Hofemann, G. van Brussel, G. van Kuik,
       A 3D Unsteady Panel Method for Vertical Axis Wind Turbines, DUWIND, 2008.
    */
    static double interpolation_layer_notch_angle;
    
    /**
       Quantities below this threshold will be treated as nil.
    */
    static double inversion_tolerance;
    
    /**
       If the inner product of normals of neighbouring panels is more than sharp_edge_tolerance in absolute value,
       then the edge shared by the two panels is considered "sharp" and treated accordingly.
       (e.g., for trailing edge detection).
    */
    static double sharp_edge_threshold;
    
    /**
      Factor applied to the smallest panel edge, to obtain the normal distance for below-surface collocation points:
      collocation_point_delta \f$=\f$ collocation_point_delta_factor \f$\cdot\f$ min_edge.
    */
    static double collocation_point_delta_factor;
};

};

#endif // __PARAMETERS_HPP__
