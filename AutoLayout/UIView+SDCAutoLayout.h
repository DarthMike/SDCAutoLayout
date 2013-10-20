//
//  UIView+SDCAutoLayout.h
//  AutoLayout
//
//  Created by Scott Berrevoets on 10/18/13.
//  Copyright (c) 2013 Scotty Doesn't Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (SDCAutoLayout)

- (UIView *)sdc_commonAncestorWithView:(UIView *)view;

- (void)sdc_alignEdgesWithSuperview:(UIRectEdge)edges;
- (void)sdc_alignEdgesWithSuperview:(UIRectEdge)edges insets:(UIEdgeInsets)insets;

- (void)sdc_alignEdges:(UIRectEdge)edges withView:(UIView *)view;
- (void)sdc_alignEdges:(UIRectEdge)edges withView:(UIView *)view insets:(UIEdgeInsets)insets;

- (void)sdc_alignCentersWithView:(UIView *)view;
- (void)sdc_alignCentersWithView:(UIView *)view offset:(UIOffset)offset;
- (void)sdc_alignHorizontalCenterWithView:(UIView *)view;
- (void)sdc_alignHorizontalCenterWithView:(UIView *)view offset:(CGFloat)offset;
- (void)sdc_alignVerticalCenterWithView:(UIView *)view;
- (void)sdc_alignVerticalCenterWithView:(UIView *)view offset:(CGFloat)offset;

- (void)sdc_alignBaselineWithView:(UIView *)view;
- (void)sdc_alignBaselineWithView:(UIView *)view offset:(CGFloat)offset;

- (void)pinWidth:(CGFloat)width;
- (void)pinHeight:(CGFloat)height;
- (void)pinSize:(CGSize)size;

- (void)sdc_centerInSuperview;
- (void)sdc_horizontallyCenterInSuperview;
- (void)sdc_verticallyCenterInSuperview;

@end
