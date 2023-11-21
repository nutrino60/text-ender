add_library(text_render SHARED
        render.cpp
        )
target_include_directories(text_render
        SYSTEM PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )
set_target_properties(text_render PROPERTIES OUTPUT_NAME "text_render"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
        PREFIX "")

target_link_libraries(text_render
        PUBLIC
        )

