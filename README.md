# opencv3.1-win10-vs2015
Compiled files for opencv3.1(with opencv_contrib) in vs2015, win10 x64

###### 1.Download 
Click on the download zip button, and unzip .zip file.

###### 2
Copy the all x64/vc14/bin/*.dll files into C://Windows//System32//(将x64/vc64/bin/目录下的所有dll文件拷贝到C://Windows//System32//目录下)

###### 3
######## 3.1 Open vs2015 and create a new blank project.(创建一个新的c++的空项目)

######## 3.2 Click on view->other windows->Property manager. And then click on your project/Debug|x64/Microsoft.Cpp.x64.user.(点击视图->其他窗口->属性管理器，然后在右上方出现的属性管理器中点击Debug|x64下的.user文件，开始编辑。)

######## 3.3 In usual property->VC++ category, we need edit include catergory and lib catergory.
include catergory -> D:\opencv3.1\include\opencv2
                     D:\opencv3.1\include\opencv
                     D:\opencv3.1\include                 (use your own file path)(包含目录添加三个目录include，include\opencv和include\opencv2)
lib catergory ->  D:\opencv3.1\x64\vc14\lib               (use your own file path)(库目录添加一个目录x64\vc14\lib)

######## 3.4 In linker -> input -> Additional dependencies add:(添加依赖项)
"opencv_aruco310d.lib
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
opencv_aruco310.lib"

###### 4
Copy the context of "test.cpp" and debug.(测试)

