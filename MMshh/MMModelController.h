//
//  MMModelController.h
//  MMshh
//
//  Created by Gambill on 11/15/13.
//  Copyright (c) 2013 Gambill. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MMDataViewController;

@interface MMModelController : NSObject <UIPageViewControllerDataSource>

- (MMDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(MMDataViewController *)viewController;

@end
