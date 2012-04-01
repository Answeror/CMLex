#pragma once
#if !defined(__CML_HPP_20111211143901__)
#define __CML_HPP_20111211143901__

/**
 *  @file
 *  @author answeror <answeror@gmail.com>
 *  @date 2012-03-13
 *  
 *  @section DESCRIPTION
 *  
 *  
 */

#include "fwd.hpp"

namespace cml
{
#define _(a, b)\
    inline const CMLEX_NAMESPACE::real_t& a(const CMLEX_NAMESPACE::quaternion &q) {\
        return q[CMLEX_NAMESPACE::quaternion::b];\
    }\
    inline CMLEX_NAMESPACE::real_t& a(CMLEX_NAMESPACE::quaternion &q) {\
        return const_cast<CMLEX_NAMESPACE::real_t&>(\
            a(static_cast<const CMLEX_NAMESPACE::quaternion&>(q))\
        );\
    }

_(x, X)
_(y, Y)
_(z, Z)
_(w, W)
    
#undef _

#define _(a, b)\
    template<class T>\
    inline const T& a(const vector<T, fixed<2> > &v) {\
        return v[b];\
    }\
    template<class T>\
    inline T& a(vector<T, fixed<2> > &v) {\
        return const_cast<T&>(\
            a(static_cast<const vector<T, fixed<2> >&>(v))\
        );\
    }

_(x, 0)
_(y, 1)
    
#undef _

#define _(a, b)\
    template<class T>\
    inline const T& a(const vector<T, fixed<3> > &v) {\
        return v[b];\
    }\
    template<class T>\
    inline T& a(vector<T, fixed<3> > &v) {\
        return const_cast<T&>(\
            a(static_cast<const vector<T, fixed<3> >&>(v))\
        );\
    }

_(x, 0)
_(y, 1)
_(z, 2)
    
#undef _

#define _(a, b)\
    template<class T>\
    inline const T& a(const vector<T, fixed<4> > &v) {\
        return v[b];\
    }\
    template<class T>\
    inline T& a(vector<T, fixed<4> > &v) {\
        return const_cast<T&>(\
            a(static_cast<const vector<T, fixed<4> >&>(v))\
        );\
    }

_(x, 0)
_(y, 1)
_(z, 2)
_(w, 3)
    
#undef _
}

#endif // __CML_HPP_20111211143901__
