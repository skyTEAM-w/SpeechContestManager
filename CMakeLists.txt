cmake_minimum_required(VERSION 3.21)
project(SpeechContestManager)

set(CMAKE_CXX_STANDARD 20)

add_executable(SpeechContestManager main.cpp SpeechManager.cpp SpeechManager.h Competitor.cpp Competitor.h)
