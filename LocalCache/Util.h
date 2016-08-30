//
//  Util.h
//  LocalCache
//
//  Created by tan on 13-2-6.
//  Copyright (c) 2013年 adways. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Util : NSObject

+ (NSString *)sha1:(NSString *)str;
+ (NSString *)md5Hash:(NSString *)str;

@end
