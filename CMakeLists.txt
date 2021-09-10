cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME 3d_engine)

add_subdirectory(editor)
add_subdirectory(core)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT 3d_engine_editor)