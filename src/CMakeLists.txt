# Добавьте источник в исполняемый файл этого проекта.
#add_executable (APIReserch "APIReserch.cpp"   "IAPI/API_1_0.h" "IAPI/iJsonAPI.h" "IAPI/APICore.h")
target_sources(APIReserch
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/APIReserch.cpp"
)