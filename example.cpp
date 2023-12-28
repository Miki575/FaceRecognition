#include <stdio.h>
#include <string>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{

    std::string path = "/home/miki/Pictures/tatra.jpg";
    Mat image;
    image = imread( path, IMREAD_COLOR );
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}