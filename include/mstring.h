#ifndef _MSTRING_H_
#define _MSTRING_H_

#include <cstdio>
#include <cstring>

constexpr char* _version = "0.1";

namespace MS
{
    class mstring{
        
        size_t _str_len = 0;
        char* _str = nullptr;


    public:
        // constructors
        mstring();
        mstring(const char* s);
        mstring(const mstring& rhs);
        mstring(mstring&& rhs) noexcept;
        ~mstring();

        //data managment
        const char* alloc_str(size_t);
        void reset();
        void swap(mstring& b);
        const char* c_str() const;
        const char* copy_str(const char*); 

        //overload operators
        mstring& operator = (mstring );
        mstring& operator += (const char*);
        mstring& operator += (const mstring&);
        const char operator [] (const int) const;

        //comparison operators
        bool operator == (const mstring&) const;
        bool operator != (const mstring&) const;
        bool operator > (const mstring&) const;
        bool operator >= (const mstring&) const;
        bool operator < (const mstring&) const;
        bool operator <= (const mstring&) const;

        // conversion operator
        operator const char* () const;


    };
}; // namespace MS


#endif _MSTRING_H_