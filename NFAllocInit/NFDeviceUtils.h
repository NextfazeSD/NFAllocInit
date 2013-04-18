//
//  NFDeviceUtils.h
//  NFAllocInit
//
//  Created by Ricardo Santos on 18/04/13.
//  Copyright (c) 2013 NextFaze SD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NFDeviceUtils : NSObject

+ (BOOL)isPad;
+ (BOOL)is4inch;
+ (BOOL)isSimulator;
+ (BOOL)isTwitterAvailable;
+ (BOOL)isSocialAvailable;
+ (BOOL)isJailbroken;
+ (BOOL)isPirated;

@end
