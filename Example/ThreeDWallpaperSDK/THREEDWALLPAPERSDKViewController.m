//
//  THREEDWALLPAPERSDKViewController.m
//  ThreeDWallpaperSDK
//
//  Created by 1418154979@qq.com on 03/11/2021.
//  Copyright (c) 2021 1418154979@qq.com. All rights reserved.
//

#import "THREEDWALLPAPERSDKViewController.h"


// test OpenGL ES
#import <ThreeDWallpaperSDK/GLESViewController.h>



@interface THREEDWALLPAPERSDKViewController ()

//
@property (strong, nonatomic) GLESViewController *glesViewController;


@end

@implementation THREEDWALLPAPERSDKViewController

#pragma mark - view life cycle
- (void)viewDidLoad {
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // 创建GLES视图并添加
    self.glesViewController = [[GLESViewController alloc] initWithView:self.view];
    [self addChildViewController:self.glesViewController];
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
