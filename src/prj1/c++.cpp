#include <iostream>
// #include <Eigen/Eigen>
// #include <Eigen/Eigen>
#include <eigen3/Eigen/Eigen>
int main()
{
    // namespace Eigen
    Eigen::Matrix3d A{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Eigen::Matrix3d B{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Eigen::Matrix3d C;

    C = A * B;

    std::cout << C << std::endl;
    return 0;
}