project(yolov3)

#set(OpenCV_DIR /usr/local/opencv/share/OpenCV)  ## for custom opencv
find_package(OpenCV REQUIRED)

include_directories("./" ${OpenCV_INCLUDE_DIRS})
add_library(yolov3 "./yolov3.cc")

add_executable(test_yolo main.cc)
target_link_libraries(test_yolo yolov3 ${OpenCV_LIBS})
