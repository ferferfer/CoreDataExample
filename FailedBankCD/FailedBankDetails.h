//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Fernando Garcia Corrochano on 13/11/14.
//  Copyright (c) 2014 FernandoGarciaCorrochano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) FailedBankInfo *info;

@end
