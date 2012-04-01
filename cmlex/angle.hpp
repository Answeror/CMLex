#ifdef _MSC_VER
	#pragma once
#endif
#ifndef __ANGLE_HPP_20120321134419__
#define __ANGLE_HPP_20120321134419__

/**
 *  @file
 *  @author answeror <answeror@gmail.com>
 *  @date 2012-03-21
 *  
 *  @section DESCRIPTION
 *  
 *  
 */

#include "fwd.hpp"

CMLEX_NAMESPACE_BEGIN()

    real_t value(const radian &r);
    real_t value(const degree &d);

    class radian
    {
    public:
        explicit radian(real_t value) : m_value(value) {}
        explicit radian(const degree &d) : m_value(cml::rad(CMLEX_NAMESPACE::value(d))) {}

    public:
        real_t value() const { return m_value; }

    private:
        real_t m_value;
    };

    class degree
    {
    public:
        explicit degree(real_t value) : m_value(value) {}
        explicit degree(const radian &r) : m_value(cml::deg(CMLEX_NAMESPACE::value(r))) {}

    public:
        real_t value() const { return m_value; }

    private:
        real_t m_value;
    };

    inline real_t value(const radian &r) { return r.value(); }
    inline real_t value(const degree &d) { return d.value(); }

CMLEX_NAMESPACE_END()

#endif // __ANGLE_HPP_20120321134419__
