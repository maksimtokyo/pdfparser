#include "pdfparser.h"
#include <chrono>

int main() {

    auto start = std::chrono::high_resolution_clock::now();
    pdfparser parser;
    parser.readfiles({
        "test1.pdf",
        "test2.pdf",
        "test3.pdf",
        "test4.pdf",
        //  "test5.pdf",
        // "test6.pdf",
        // "test7.pdf"
    });

    parser.print();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    std::cout << "While decompress: " << parser.whiledecompress << std::endl;
    std::cout << "While pars: "<< parser.whilepars<< std::endl;
    std::cout << parser.sizet() << std::endl;

}
