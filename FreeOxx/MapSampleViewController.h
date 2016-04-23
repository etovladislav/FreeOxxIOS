//
//  MapSampleViewController.h
//  FreeOxx
//
//  Created by Владислав Ульянов on 23.04.16.
//  Copyright © 2016 Владислав Ульянов. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapSampleViewController : UIViewController
<MKMapViewDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
- (IBAction)zoomIn:(id)sender;
- (IBAction)changeMapType:(id)sender;
@end
