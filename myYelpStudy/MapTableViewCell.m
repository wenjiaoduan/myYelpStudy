//
//  MapTableViewCell.m
//  myYelpStudy
//
//  Created by wenjiaoduan on 2017/6/8.
//  Copyright © 2017年 wenjiaoduan. All rights reserved.
//

#import "MapTableViewCell.h"
@interface MapTableViewCell()


@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end


@implementation MapTableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel
{
    CLLocationCoordinate2D loc = CLLocationCoordinate2DMake(dataModel.latitude, dataModel.longitude);
    NSString *subtitle = [NSString stringWithFormat:@"%@ - %@",dataModel.categories,dataModel.displayAddress];
    YelpAnnotation *annotation = [[YelpAnnotation alloc] initWithCoordinate:loc title:dataModel.name subtitle:subtitle dataModel:dataModel];
    [self.mapView addAnnotation:annotation];
    
    MKCoordinateRegion viewRegion = MKCoordinateRegionMakeWithDistance(loc, 500, 500);
    MKCoordinateRegion adjustedRegion = [self.mapView regionThatFits:viewRegion];
    
    [self.mapView setRegion:adjustedRegion animated:YES];
    self.mapView.showsUserLocation = YES;
    [self.mapView setCenterCoordinate:loc];
}

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

@end
