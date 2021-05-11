#pragma once

namespace JGeometry
{
    void negateInternal(const f32 *, f32 *);

    template<typename T>
    class TVec3
    {
    public:
        TVec3() { }
        TVec3(T);
        TVec3(const TVec3<T> &);
        TVec3(T a, T b, T c) : x(a), y(b), z(c) { }

        template<typename T>
        TVec3(T, T, T);
        
        void add(const TVec3<T> &);
        void add(const TVec3<T> &, const TVec3<T> &);
        void sub(const TVec3<T> &);
        void sub(const TVec3<T> &, const TVec3<T> &);
        void mul(const TVec3<T> &);
        void mul(const TVec3<T> &, const TVec3<T> &);
        T squared() const;
        T squared(const TVec3<T> &) const;

        T dot(const TVec3<T> &) const;
        bool epsilonEquals(const TVec3<T> &, T) const;

        void zero();
        void negate();

        template<typename T>
        void set(const TVec3<T> &);
    
        template<typename T>
        void set(T, T, T);

        template<typename T>
        void setAll(T);

        void setLength(f32);
        void scale(T);
        void scale(T, const TVec3<T> &);

        void operator =(const TVec3<T> &);
        TVec3<T> operator +(const TVec3<T> &) const; // pl
        TVec3<T> operator +=(const TVec3<T> &); // apl
        TVec3<T> operator -(const TVec3<T> &) const; // mi
        TVec3<T> operator -() const; // mi
        TVec3<T> operator -=(const TVec3<T> &); // ami
        TVec3<T> operator *(T) const; // ml
        TVec3<T> operator *=(T); // amu

        T x; // _0
        T y; // _4
        T z; // _8
    };
};

typedef JGeometry::TVec3<f32> TVec3f;
