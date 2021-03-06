//
//  NSString+Category.h
//  SpaceHome
//
//  Created by suhc on 2017/7/18.
//  Copyright © 2017年 David. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (Category)

- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

- (CGFloat)widthForFont:(UIFont *)font;

- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

- (BOOL)matchesRegex:(NSString *)regex options:(NSRegularExpressionOptions)options;

- (BOOL)containsEmoji;

- (NSString *)stringByTrim;

/**
 nil, @"", @"  ", @"\n" will Returns NO; otherwise Returns YES.
 */
- (BOOL)isNotBlank;

/**
 * 检查是否是手机号码
 */
- (BOOL)isPhoneNumer;

/**
 检查是不是身份证号
 */
- (BOOL)isIDCardNumber;

@end
