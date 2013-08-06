//
//  UIColor+NFAllocInit.h
//  NFAllocInit
//
//  Created by Andrew Williams on 6/08/13.
//  Copyright (c) 2013 NextFaze SD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIColor (NFAllocInit)

+ (UIColor *)colorForHex:(NSString *)hexColor;
+ (UIColor *)colorForHex:(NSString *)hexColor alpha:(CGFloat)alpha;

- (NSString*)hexValue;
- (NSString*)hexValueWithAlpha;

- (UIColor *)colorByDarkeningColor;
- (UIColor *)colorByFadingColor;
- (UIColor *)colorByChangingAlphaTo:(CGFloat)newAlpha;

@end
