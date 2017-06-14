//
//  YelpNetworking.h
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/5/28.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"


@import CoreLocation;

typedef void (^RestaurantCompletionBlock)(NSArray <YelpDataModel *>* dataModelArray);

@interface YelpNetworking : NSObject

+ (YelpNetworking *)sharedInstance;

- (void)fetchRestaurantsBasedOnLocation:(CLLocation *)location term:(NSString *)term completionBlock:(RestaurantCompletionBlock)completionBlock;

@end
