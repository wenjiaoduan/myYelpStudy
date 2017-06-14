//
//  YelpTableViewCell.h
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/5/29.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell


- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
