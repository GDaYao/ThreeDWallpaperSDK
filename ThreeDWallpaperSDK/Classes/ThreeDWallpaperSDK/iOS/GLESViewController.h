////  GLESViewController.h
//  ThreeDWallpaperSDK
//
//  Created on 2021/3/11.
//  
//


/** func: iOS platform -- 构建OpenGL ES draw.
 *
 *
 **/

//#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "Renderer.h"



NS_ASSUME_NONNULL_BEGIN

@interface GLESViewController : GLKViewController


- (id)initWithView:(UIView*)view;



@end

NS_ASSUME_NONNULL_END
