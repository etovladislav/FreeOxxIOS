//
//  AppDelegate.h
//  FreeOxx
//
//  Created by Владислав Ульянов on 23.04.16.
//  Copyright © 2016 Владислав Ульянов. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) IBOutlet UITextField *carWorthTextField;
- (IBAction)carWorthTextEndEditing:(UITextField *)sender;

@end

