#ifdef _MSC_VER
	#pragma once
#endif
#ifndef __GGL_HPP_20120313220050__
#define __GGL_HPP_20120313220050__

/**
 *  @file
 *  @author answeror <answeror@gmail.com>
 *  @date 2012-03-13
 *  
 *  @section DESCRIPTION
 *  
 *  GGL adapt for CML.
 */

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/register/point.hpp>

#include <cmlex/fwd.hpp>
#include <cmlex/access.hpp>

// Getter/setter version
#define CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(Point, Dim) \
    template<> struct access<Point, Dim> \
    { \
        static inline CMLEX_NAMESPACE::real_t get(Point const& p) \
        { return  p[Dim]; } \
        static inline void set(Point& p, CMLEX_NAMESPACE::real_t const& value) \
        { p[Dim] = value; } \
    };

/// 2d vector adapt
namespace boost { namespace geometry { namespace traits {
    BOOST_GEOMETRY_DETAIL_SPECIALIZE_POINT_TRAITS(CMLEX_NAMESPACE::vector2, 2, CMLEX_NAMESPACE::real_t, cs::cartesian)
    CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(CMLEX_NAMESPACE::vector2, 0)
    CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(CMLEX_NAMESPACE::vector2, 1)
}}}

/// 3d vector adapt
namespace boost { namespace geometry { namespace traits {
    BOOST_GEOMETRY_DETAIL_SPECIALIZE_POINT_TRAITS(CMLEX_NAMESPACE::vector3, 3, CMLEX_NAMESPACE::real_t, cs::cartesian)
    CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(CMLEX_NAMESPACE::vector3, 0)
    CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(CMLEX_NAMESPACE::vector3, 1)
    CMLEX_DETAIL_SPECIALIZE_POINT_ACCESS_GET_SET(CMLEX_NAMESPACE::vector3, 2)
}}}

#endif // __GGL_HPP_20120313220050__
