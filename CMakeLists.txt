cmake_minimum_required(VERSION 3.21.2)

project(template CXX)

include(CMakeFindDependencyMacro)
find_dependency(engine CONFIG REQUIRED)

include(engine_create)

set(PROJECT_FILE "${CMAKE_CURRENT_LIST_DIR}/template.project")

engine_create_plugin(${PROJECT_NAME}
        PROJECT_FILE "${PROJECT_FILE}"

        SOURCE_FILES
            src/plugin.cpp

        INCLUDE_FILES
            src/scenes/load.hpp
            src/groups.hpp
            src/tags.hpp
        )

engine_create_launcher(
        SOURCE_DIR "${VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/engine/launcher"
        PROJECT_FILE "${PROJECT_FILE}"
)

target_precompile_headers(${PROJECT_NAME} PUBLIC src/engine.hxx)
