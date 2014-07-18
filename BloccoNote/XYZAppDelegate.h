//
//  XYZAppDelegate.h
//  BloccoNote
//
//  Created by Innocenzo Tremamondo on 18/07/14.
//  Copyright (c) 2014 LabNova. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
