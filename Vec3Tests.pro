
TARGET=test
SOURCES+=*.cpp
HEADERS+=*.h
CONFIG-=app_bundle
OTHER_FILES+= README.md
QMAKE_CXXFLAGS += -std=c++1z
QMAKE_CXXFLAGS += -Wall -Wextra
QMAKE_CXXFLAGS += -g
INCLUDEPATH+=/usr/local/include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread
