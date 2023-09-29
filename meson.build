project('Vectorium', 'cpp', version: '1.0.0')

include = include_directories('include/')

add_project_arguments(language: 'cpp')

src=[
    'src/vector3D.cpp',
    'src/noise.cpp',
]
install_headers(
                'include/vector3D.hpp',
                subdir : 'vectorium')

lib=static_library('vectorium', src, 
        include_directories: include,install : true)

exe_src=[
    'dev.cpp',
]
executable(
    'dev.elf',
    sources: exe_src, 
    include_directories: include,
    link_with: [lib]
)