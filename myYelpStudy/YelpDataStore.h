//
//  YelpDataStore.h
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/6/3.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;
@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end
