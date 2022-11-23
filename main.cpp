#include <iostream>

template<typename vt, std::size_t height, std::size_t width>
class matrix {
public:
    matrix() = default;
    matrix(const matrix<vt, height, width>&) = default;
    matrix& operator=(const matrix&) = default;
    ~matrix() = default;

    explicit matrix(const vt& num) {
        for (int i = 0; i < height; ++i)
            for (int j = 0; j < width; ++j)
                _matrix[i][j] = num;
    }

    vt const& at(const std::size_t& i, const std::size_t& j) const {
        return _matrix[i - 1][j - 1];
    }

    vt& at(const std::size_t& i, const std::size_t& j) {
        return _matrix[i - 1][j - 1];
    }

private:
    vt _matrix[height][width]{};
};

//int main() {
//    const int x = 3;
//    const matrix<int, 3, 4> a(x);
//    std::cout << a.at(2, 3);
//    return 0;
//}
