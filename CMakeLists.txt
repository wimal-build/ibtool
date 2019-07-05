cmake_minimum_required(VERSION 3.0)

add_compile_options(-Wno-write-strings)

add_definitions(-D_strdup=strdup)
aux_source_directory(src sources)

include_directories(
    include
    3rd/pugixml/src
    3rd/PlistCpp/src
    3rd/PlistCpp/third-party
    3rd/NSPlist/src
)
list(
    APPEND sources
    3rd/pugixml/src/pugixml.cpp
    3rd/NSPlist/src/NSPlist.cpp
    3rd/NSPlist/src/NSPlistLexer.cpp
    3rd/NSPlist/src/NSPlistParser.cpp
    3rd/PlistCpp/src/Plist.cpp
    3rd/PlistCpp/src/PlistDate.cpp
)
add_executable(ibtool ${sources})
