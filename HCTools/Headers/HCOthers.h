//
//  HCOthers.h
//  HCTools
//
//  Created by hclib on 2017/3/24.
//  Copyright © 2017年 hclib. All rights reserved.
//

#ifndef HCOthers_h
#define HCOthers_h

//获取普通字体
#define FONT(font)          [UIFont systemFontOfSize:font]
//获取粗字体
#define BOLDFONT(font)      [UIFont boldSystemFontOfSize:font]
//获取颜色
#define HEXCOLOR(hexStr)    [UIColor colorWithHexString:hexStr]
#define HEXCOLOR_ALPHA(hexStr,alpha)    [UIColor colorWithHexString:hexStr alpha:alpha]
//获取图片
#define IMAGE(imageName)     [UIImage imageNamed:imageName]

//自定义Log
#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"<%s:%d> %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(...)
#endif

#endif
