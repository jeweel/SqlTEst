//
//  DBManager.h
//  SampleDB
//
//  Created by IMPROLABS PTE LTD on 12/8/15.
//  Copyright © 2015 IMPROLABS PTE LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBManager : NSObject

-(instancetype)initWithDatabaseFilename:(NSString *)dbFilename;
@property (nonatomic, strong) NSMutableArray *arrColumnNames;

@property (nonatomic) int affectedRows;

@property (nonatomic) long long lastInsertedRowID;
-(NSArray *)loadDataFromDB:(NSString *)query;

-(void)executeQuery:(NSString *)query;
@end
