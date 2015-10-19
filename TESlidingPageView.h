//
//  ViewController.h
//  TinderPageView
//
//  Created by Timothy Edwards on 07/10/2015.
//  Copyright © 2015 Timothy Edwards. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TESlidingButtonSpecifics.h"

@interface TESlidingPageView : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>


@property (strong, nonatomic, readonly) UIPageViewController *PVC;
@property (strong, nonatomic, readonly) UIView *navigationBar;
@property (strong, nonatomic, readonly) UIView *divider;
@property (strong, nonatomic, readonly) NSArray *viewControllers;
@property (strong, nonatomic, readonly) NSArray *buttons;

@property (strong, nonatomic, readonly) TESlidingButtonSpecifics *offscreenLeftButtonSpecifics;
@property (strong, nonatomic, readonly) TESlidingButtonSpecifics *leftButtonSpecifics;
@property (strong, nonatomic, readonly) TESlidingButtonSpecifics *centerButtonSpecifics;
@property (strong, nonatomic, readonly) TESlidingButtonSpecifics *rightButtonSpecifics;
@property (strong, nonatomic, readonly) TESlidingButtonSpecifics *offscreenRightButtonSpecifics;

@property (nonatomic) NSUInteger selectedIndex;

-(instancetype)initWithViewControllers:(NSArray*)viewControllers buttonImages:(NSArray*)buttonImages;

@end
