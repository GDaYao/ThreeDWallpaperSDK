////  Renderer.cpp
//  ThreeDWallpaperSDK
//
//  Created on 2021/3/11.
//  
//


#include "Renderer.h"
#include "Platform.h"

void surfaceCreated() {
    // 指定刷新颜色缓冲区的颜色
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f); // -- 设置颜色缓冲区的颜色为红色
}

void surfaceChanged(int w, int h) {
    ESLog("viewport: %d, %d", w, h);
    // 设置视口
    glViewport(0, 0, w, h);
}

void drawFrame() {
    // 清除颜色缓冲区
    glClear(GL_COLOR_BUFFER_BIT);
    // glClearColor(1.0f, 0.0f, 0.0f, 0.0f) 表示设置颜色缓冲区的颜色为红色，这样glClear(GL_COLOR_BUFFER_BIT) 每次都会用红色清除颜色缓冲区
}

