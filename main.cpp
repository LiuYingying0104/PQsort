
#include <vector>
#include <random>
#include <algorithm>
#include "pdqsort.h" // 确保你已经正确地包含了pdqsort库的头文件

int main() {
    // 生成小规模示例数据
    std::vector<int> data(125000000); // 更换为125000000生成5GB的数据集

    // 填充数据
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 1000000);
    for (auto& d : data) {
        d = distrib(gen);
    }

    // 使用pdqsort进行排序
    pdqsort(data.begin(), data.end());

    // 如果需要，这里可以输出或处理排序后的数据

    return 0;
}
