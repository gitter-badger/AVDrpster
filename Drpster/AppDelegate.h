//
//  ViewController.m
//  Drpster
//
//  Created by Matthew Perez on 4/26/15.
//  Vendor Created by Sam Vermette on 27.03.11.
//  API Created by shuichi on 12/17/13.
//  Copyright (c) 2015 Matt Perez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

