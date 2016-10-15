// OpenAL and freealut wrapper for Windows
// by Katayama Hirofumi MZ <katayama.hirofumi.mz@gmail.com>.
// This file is public domain software (PDS).

#ifndef ALUTWRAP_HPP_
#define ALUTWRAP_HPP_   1

#define AL_ALUT_H
#ifdef _WIN32
    #define ALUT_APIENTRY __cdecl
#else
    #define ALUT_APIENTRY
#endif

#include "alwrap.hpp"

#define ALUT_API extern

#define ALUT_API_MAJOR_VERSION                 1
#define ALUT_API_MINOR_VERSION                 1

#define ALUT_ERROR_NO_ERROR                    0
#define ALUT_ERROR_OUT_OF_MEMORY               0x200
#define ALUT_ERROR_INVALID_ENUM                0x201
#define ALUT_ERROR_INVALID_VALUE               0x202
#define ALUT_ERROR_INVALID_OPERATION           0x203
#define ALUT_ERROR_NO_CURRENT_CONTEXT          0x204
#define ALUT_ERROR_AL_ERROR_ON_ENTRY           0x205
#define ALUT_ERROR_ALC_ERROR_ON_ENTRY          0x206
#define ALUT_ERROR_OPEN_DEVICE                 0x207
#define ALUT_ERROR_CLOSE_DEVICE                0x208
#define ALUT_ERROR_CREATE_CONTEXT              0x209
#define ALUT_ERROR_MAKE_CONTEXT_CURRENT        0x20A
#define ALUT_ERROR_DESTROY_CONTEXT             0x20B
#define ALUT_ERROR_GEN_BUFFERS                 0x20C
#define ALUT_ERROR_BUFFER_DATA                 0x20D
#define ALUT_ERROR_IO_ERROR                    0x20E
#define ALUT_ERROR_UNSUPPORTED_FILE_TYPE       0x20F
#define ALUT_ERROR_UNSUPPORTED_FILE_SUBTYPE    0x210
#define ALUT_ERROR_CORRUPT_OR_TRUNCATED_DATA   0x211

#define ALUT_WAVEFORM_SINE                     0x100
#define ALUT_WAVEFORM_SQUARE                   0x101
#define ALUT_WAVEFORM_SAWTOOTH                 0x102
#define ALUT_WAVEFORM_WHITENOISE               0x103
#define ALUT_WAVEFORM_IMPULSE                  0x104

#define ALUT_LOADER_BUFFER                     0x300
#define ALUT_LOADER_MEMORY                     0x301

ALUT_API ALboolean ALUT_APIENTRY alutInit(int *argcp, char **argv);
ALUT_API ALboolean ALUT_APIENTRY alutInitWithoutContext(int *argcp, char **argv);
ALUT_API ALboolean ALUT_APIENTRY alutExit(void);

ALUT_API ALenum ALUT_APIENTRY alutGetError(void);
ALUT_API const char *ALUT_APIENTRY alutGetErrorString(ALenum error);

ALUT_API ALuint ALUT_APIENTRY alutCreateBufferFromFile(const char *fileName);
ALUT_API ALuint ALUT_APIENTRY alutCreateBufferFromFileImage(const ALvoid *data, ALsizei length);
ALUT_API ALuint ALUT_APIENTRY alutCreateBufferHelloWorld(void);
ALUT_API ALuint ALUT_APIENTRY alutCreateBufferWaveform(ALenum waveshape, ALfloat frequency, ALfloat phase, ALfloat duration);

ALUT_API ALvoid *ALUT_APIENTRY alutLoadMemoryFromFile(const char *fileName, ALenum *format, ALsizei *size, ALfloat *frequency);
ALUT_API ALvoid *ALUT_APIENTRY alutLoadMemoryFromFileImage(const ALvoid *data, ALsizei length, ALenum *format, ALsizei *size, ALfloat *frequency);
ALUT_API ALvoid *ALUT_APIENTRY alutLoadMemoryHelloWorld(ALenum *format, ALsizei *size, ALfloat *frequency);
ALUT_API ALvoid *ALUT_APIENTRY alutLoadMemoryWaveform(ALenum waveshape, ALfloat frequency, ALfloat phase, ALfloat duration, ALenum *format, ALsizei *size, ALfloat *freq);

ALUT_API const char *ALUT_APIENTRY alutGetMIMETypes(ALenum loader);

ALUT_API ALint ALUT_APIENTRY alutGetMajorVersion(void);
ALUT_API ALint ALUT_APIENTRY alutGetMinorVersion(void);

ALUT_API ALboolean ALUT_APIENTRY alutSleep(ALfloat duration);

#endif  // ndef ALUTWRAP_HPP_
