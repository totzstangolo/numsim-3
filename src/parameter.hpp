#include "typedef.hpp"
//------------------------------------------------------------------------------
#ifndef __PARAMETER_HPP
#define __PARAMETER_HPP
//------------------------------------------------------------------------------
class Parameter {
public:
	/// Constructs a new Parameter set with default values
        // Driven Cavity parameters; see exercise sheet 1
        Parameter ();

	/// Loads the parameter values from a file
	void Load (const char* file);

	/// Getter functions for all parameters
	const real_t&		    Re		() const;
    const real_t&		    Pr		() const;
	const real_t&		    Omega	() const;
	const real_t&		    Alpha	() const;
	const real_t&		    Dt		() const;
	const real_t&		    Tend	() const;
	const index_t&		    IterMax	() const;
	const real_t&		    Eps		() const;
	const real_t&		    Tau		() const;
    const multi_real_t&		grav	() const;
private:
    real_t	_re;
    real_t  _pr;
    real_t	_omega;
    real_t	_alpha;
    real_t  _beta;
    real_t	_dt;
    real_t	_tend;
    real_t	_eps;
    real_t	_tau;
    index_t	_itermax;
    multi_real_t _grav;
};
//------------------------------------------------------------------------------
#endif // __PARAMETER_HPP
