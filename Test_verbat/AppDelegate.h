//
//  AppDelegate.h
//  Test_verbat
//
//  Created by Guna Sundari on 12/05/17.
//  Copyright © 2017 Guna Sundari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

