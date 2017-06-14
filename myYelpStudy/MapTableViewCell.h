//
//  MapTableViewCell.h
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/6/8.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"
@import MapKit;

@interface MapTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end

