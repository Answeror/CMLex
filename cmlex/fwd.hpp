#ifdef _MSC_VER
	#pragma once
#endif
#ifndef __FWD_HPP_20120313214914__
#define __FWD_HPP_20120313214914__

/**
 *  @file
 *  @author answeror <answeror@gmail.com>
 *  @date 2012-03-13
 *  
 *  @section DESCRIPTION
 *  
 *  
 */

#include <cml/cml.h>

#ifndef CMLEX_REAL
    #define CMLEX_REAL double
#endif

#define CMLEX_NAMESPACE cmlex
#define CMLEX_NAMESPACE_BEGIN() namespace cmlex {
#define CMLEX_NAMESPACE_END() }

CMLEX_NAMESPACE_BEGIN()
    typedef CMLEX_REAL real_t;
    typedef cml::quaternion<real_t> quaternion;
    typedef cml::vector<real_t, cml::fixed<2> > vector2;
    typedef cml::vector<real_t, cml::fixed<3> > vector3;
    typedef cml::vector<real_t, cml::fixed<4> > vector4;
    typedef cml::matrix<real_t, cml::fixed<2, 2> > matrix22;
    typedef cml::matrix<real_t, cml::fixed<3, 3> > matrix33;
    typedef cml::matrix<real_t, cml::fixed<4, 4> > matrix44;

    class radian;
    class degree;
CMLEX_NAMESPACE_END()

#endif // __FWD_HPP_20120313214914__
