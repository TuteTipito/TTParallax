//
//  TTTouchForwardView.m
//  iMAA
//
//  Created by Matias Spinelli on 21/3/15.
//  Copyright (c) 2015 Dalmunc. All rights reserved.
//

#import "TTTouchForwardView.h"

@implementation TTTouchForwardView

-(id)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *hitView = [super hitTest:point withEvent:event];
    if (hitView == self) {
        return self.forwardView;
    } else {
        return hitView;
    }
}

@end
