//
// Vortexje -- Default parameters
//
// Copyright (C) 2012 - 2014 Baayen & Heinz GmbH.
//
// Authors: Jorn Baayen <jorn.baayen@baayen-heinz.com>
//

#include <cmath>
#include <limits>

#include <vortexje/parameters.hpp>

using namespace Vortexje;
using namespace std;

// Default values:
int    Parameters::linear_solver_max_iterations       = 20000;

double Parameters::linear_solver_tolerance            = numeric_limits<double>::epsilon();

bool   Parameters::unsteady_bernoulli                 = true;

bool   Parameters::convect_wake                       = true;

bool   Parameters::wake_emission_follow_bisector      = true;

double Parameters::wake_emission_distance_factor      = 0.25;

double Parameters::wake_vortex_core_radius            = 0.0;

double Parameters::static_wake_length                 = 100.0;

double Parameters::zero_threshold                     = numeric_limits<double>::epsilon();

double Parameters::collocation_point_delta            = 1e-12;

double Parameters::interpolation_layer_thickness      = 0.0;

int    Parameters::max_boundary_layer_iterations      = 100;

double Parameters::boundary_layer_iteration_tolerance = numeric_limits<double>::epsilon();
