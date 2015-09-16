//
//  TTParallaxViewController.h
//  iMAA
//
//  Created by Matias Spinelli on 21/3/15.
//  Copyright (c) 2015 Dalmunc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TTTouchForwardView.h"

@interface TTParallaxViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, weak) IBOutlet UIView * parallaxContainerView;
@property (nonatomic, weak) IBOutlet UIScrollView * scrollView;
@property (nonatomic, weak) IBOutlet TTTouchForwardView * parallaxView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *parallaxContainerViewHeightLayoutConstraint;

@property (nonatomic, assign) CGFloat minimumHeight;

// overrride for additional functionality
- (void)parallaxViewContainerHeightWillChange:(CGFloat)newHeight fromOldHeight:(CGFloat)height;

// no need to set manually, value set by default from NSLayoutConstraint constant
- (void)setParallaxViewContainerRestingHeight:(CGFloat)parallaxViewContainerRestingHeight;
- (CGFloat)parallaxViewContainerRestingHeight;

@end
