#include <opencv2/opencv.hpp>
int main() {
    cv::Mat image = cv::imread("path/to/image.jpg");
    if (!image.empty()) {
        cv::imshow("Image", image);
        cv::waitKey(0);
    } else {
        std::cout << "Image not found!" << std::endl;
    }
    return 0;
}
