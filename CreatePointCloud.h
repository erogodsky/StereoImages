#include <opencv2/opencv.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/calib3d.hpp>
#include <pcl/visualization/cloud_viewer.h>

using namespace std;
using namespace cv;

pcl::PointCloud<pcl::PointXYZRGB>::Ptr CreatePointCloud(Mat disparityMap, Mat img);
