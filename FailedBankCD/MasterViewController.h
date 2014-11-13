//
//  MasterViewController.h
//  FailedBankCD
//
//  Created by Fernando Garcia Corrochano on 13/11/14.
//  Copyright (c) 2014 FernandoGarciaCorrochano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

