//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Jose D Leal on 5/31/14.
//  Copyright (c) 2014 PpDs. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
