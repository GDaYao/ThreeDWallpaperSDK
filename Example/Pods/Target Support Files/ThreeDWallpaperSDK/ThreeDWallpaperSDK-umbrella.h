#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Platform.h"
#import "Renderer.h"
#import "GLESViewController.h"
#import "ThreeDWallpaperSDKPublic.h"

FOUNDATION_EXPORT double ThreeDWallpaperSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char ThreeDWallpaperSDKVersionString[];

