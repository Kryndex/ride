find_package(wxWidgets COMPONENTS core aui base stc REQUIRED)

include( "${wxWidgets_USE_FILE}" )

FILE(GLOB src *.cpp;*.h)

source_group("" FILES ${src})

add_executable(
	${PROJECT_NAME} WIN32 
	${src}
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)