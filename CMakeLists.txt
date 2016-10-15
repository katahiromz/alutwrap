cmake_minimum_required(VERSION 2.8)
add_library(alutwrap STATIC 
    alutBufferData.cpp
    alutCodec.cpp
    alutError.cpp
    alutInit.cpp
    alutInputStream.cpp
    alutLoader.cpp
    alutOutputStream.cpp
    alutUtil.cpp
    alutVersion.cpp
    alutWaveform.cpp)
