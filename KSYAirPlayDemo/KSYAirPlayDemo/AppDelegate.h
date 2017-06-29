//
//  AppDelegate.h
//  KSYAirPlayDemo
//
//  Created by 江东 on 17/5/12.
//  Copyright © 2017年 江东. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;

@end
