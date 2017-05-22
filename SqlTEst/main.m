//
//  main.m
//  SqlTEst
//
//  Created by IMPROLABS PTE LTD on 12/8/15.
//  Copyright © 2015 IMPROLABS PTE LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "DBManager.h"
int main(int argc, char * argv[]) {
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
        
//        DBManager *dbManager = [[DBManager alloc] initWithDatabaseFilename:@"sampledb.sql"];
//        
//        NSString *query = @"insert into peopleInfo values(null, 'sadi', 'madi', 42)";
//        
//        [dbManager executeQuery:query];
//        
//        query = @"Select * from peopleInfo";
//        
//        NSArray* arr = [dbManager loadDataFromDB:query];
//        
//        NSLog(@"%@",arr);
    }
}
