##Opencv3.1-win10-vs2015(with opencv-contrib)
Compiled files for opencv3.1(with opencv_contrib) in vs2015, win10 x64

* Click on the download zip button, and unzip .zip file.
* Copy the all x64/vc14/bin/*.dll files into C://Windows//System32//
* Open vs2015 and create a new blank project.
    *  Click on view->other windows->Property manager. And then click on your project/ Debug|x64 / Microsoft.Cpp.x64.user.
        * include catergory:
           
            D:\opencv3.1\include\opencv2

            D:\opencv3.1\include\opencv
            
            D:\opencv3.1\include(use your own file path)
            
    *  lib catergory ->  D:\opencv3.1\x64\vc14\lib
    *  In linker -> input -> Additional dependencies add:
```bash
opencv_aruco310d.lib
opencv_bgsegm310d.lib
opencv_calib3d310d.lib
opencv_ccalib310d.lib
opencv_core310d.lib
opencv_datasets310d.lib
opencv_dnn310d.lib
opencv_dpm310d.lib
opencv_face310d.lib
opencv_features2d310d.lib
opencv_flann310d.lib
opencv_fuzzy310d.lib
opencv_hdf310d.lib
opencv_highgui310d.lib
opencv_imgcodecs310d.lib
opencv_imgproc310d.lib
opencv_line_descriptor310d.lib
opencv_ml310d.lib
opencv_objdetect310d.lib
opencv_optflow310d.lib
opencv_photo310d.lib
opencv_plot310d.lib
opencv_reg310d.lib
opencv_rgbd310d.lib
opencv_saliency310d.lib
opencv_shape310d.lib
opencv_stereo310d.lib
opencv_stitching310d.lib
opencv_structured_light310d.lib
opencv_superres310d.lib
opencv_surface_matching310d.lib
opencv_text310d.lib
opencv_tracking310d.lib
opencv_ts310d.lib
opencv_video310d.lib
opencv_videoio310d.lib
opencv_videostab310d.lib
opencv_world310d.lib
opencv_xfeatures2d310d.lib
opencv_ximgproc310d.lib
opencv_xobjdetect310d.lib
opencv_xphoto310d.lib
opencv_bgsegm310.lib
opencv_calib3d310.lib
opencv_ccalib310.lib
opencv_core310.lib
opencv_datasets310.lib
opencv_dnn310.lib
opencv_dpm310.lib
opencv_face310.lib
opencv_features2d310.lib
opencv_flann310.lib
opencv_fuzzy310.lib
opencv_hdf310.lib
opencv_highgui310.lib
opencv_imgcodecs310.lib
opencv_imgproc310.lib
opencv_line_descriptor310.lib
opencv_ml310.lib
opencv_objdetect310.lib
opencv_optflow310.lib
opencv_photo310.lib
opencv_plot310.lib
opencv_reg310.lib
opencv_rgbd310.lib
opencv_saliency310.lib
opencv_shape310.lib
opencv_stereo310.lib
opencv_stitching310.lib
opencv_structured_light310.lib
opencv_superres310.lib
opencv_surface_matching310.lib
opencv_text310.lib
opencv_tracking310.lib
opencv_ts310.lib
opencv_video310.lib
opencv_videoio310.lib
opencv_videostab310.lib
opencv_world310.lib
opencv_xfeatures2d310.lib
opencv_ximgproc310.lib
opencv_xobjdetect310.lib
opencv_xphoto310.lib
opencv_aruco310.lib
```
* Test and debug

use "test.cpp" and img folder
