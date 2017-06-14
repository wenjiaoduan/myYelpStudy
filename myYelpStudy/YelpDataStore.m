//
//  YelpDataStore.m
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/6/3.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//

#import "YelpDataStore.h"

@implementation YelpDataStore

+ (YelpDataStore *)sharedInstance {
    
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}

@end

