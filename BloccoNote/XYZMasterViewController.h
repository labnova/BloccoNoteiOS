//
//  XYZMasterViewController.h
//  BloccoNote
//
//  Created by Innocenzo Tremamondo on 18/07/14.
//  Copyright (c) 2014 LabNova. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface XYZMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
