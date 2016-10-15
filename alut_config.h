#ifdef _WIN32
    #define HAVE_SLEEP 1
    #define HAVE_WINDOWS_H 1
    #define HAVE_BASETSD_H 1
#else
    #define HAVE_UNISTD_H 1
    #define HAVE_NANOSLEEP 1
    #define HAVE_USLEEP 1
    #define HAVE_STDINT_H 1
#endif

#define HAVE_STAT 1
//#define HAVE__STAT 1
