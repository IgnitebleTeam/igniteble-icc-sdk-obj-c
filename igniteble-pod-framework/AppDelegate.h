//
//  AppDelegate.h
//  igniteble-pod-framework
//
//  Created by saco on 9/1/17.
//  Copyright © 2017 Lure. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <IgnitebleIccSDK/IgnitebleIccSDK.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

