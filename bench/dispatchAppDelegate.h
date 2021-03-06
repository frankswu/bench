//
//  dispatchAppDelegate.h
//  bench
//
//  Created by Drew Crawford on 5/14/13.
//  Copyright (c) 2013 DrewCrawfordApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface dispatchAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
