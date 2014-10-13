//
//  MyContacts3AppDelegate.h
//  MyContacts3
//
//  Created by webstudent on 10/13/14.
//  Copyright (c) 2014 webstudent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyContacts3AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
