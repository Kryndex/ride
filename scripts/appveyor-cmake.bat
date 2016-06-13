cd %APPVEYOR_BUILD_FOLDER%
mkdir build
mkdir install-dist

cd %APPVEYOR_BUILD_FOLDER%\build
cmake -DCMAKE_INSTALL_PREFIX=%APPVEYOR_BUILD_FOLDER%\install-dist\ -DRIDE_BUILD_COMMIT=%APPVEYOR_REPO_COMMIT% -DRIDE_BUILD_NUMBER=%APPVEYOR_BUILD_ID% -DRIDE_BUILD_BRANCH=%APPVEYOR_REPO_BRANCH% -DRIDE_BUILD_REPO=%APPVEYOR_REPO_NAME% $CMAKEOSXARG ..