//
// Created by micha on 2024/11/21.
//

#ifndef TEST_OCR_TEST_OCR_H
#define TEST_OCR_TEST_OCR_H

#include <android/log.h>

#include <cstddef>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "jpeg/jpeglib.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <vector>
#include <map>
#include <setjmp.h>

using namespace std;
#define TAG "myTag" // 这个是自定义的LOG的标识
#define LOGI(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__)


class Test_OCR {
public:
    int process();
};


#endif //TEST_OCR_TEST_OCR_H
