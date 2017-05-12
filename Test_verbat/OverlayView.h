//
//  OverlayView.h
//  Test_verbat
//
//  Created by Guna Sundari on 12/05/17.
//  Copyright © 2017 Guna Sundari. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger , GGOverlayViewMode) {
    GGOverlayViewModeLeft,
    GGOverlayViewModeRight
};

@interface OverlayView : UIView

@property (nonatomic) GGOverlayViewMode mode;
@property (nonatomic, strong) UIImageView *imageView;

@end

