#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size){
    std::cout << "Динамический массив: ";
    for(int i = 0; i < logical_size; i++){
        std::cout << arr[i] << " ";
    }

    for(int k = logical_size; k < actual_size; k++){
        std::cout << "_ ";
    }
}


int main() {

    int actual_size;
    int logical_size;

    std::cout << "Введите фактичеcкий размер массива: ";
    std::cin >> actual_size;
    int* arr = new int[actual_size]();


    std::cout << "Введите логический размер массива: ";
    std::cin >> logical_size;

    if(actual_size >= logical_size) {
        for (int i = 0; i < logical_size; i++) {
            std::cout << "Введите arr[" << i << "]: ";
            std::cin >> arr[i];

        }

        print_dynamic_array(arr, logical_size, actual_size);
    }

    delete[] arr;
    return 0;
}
