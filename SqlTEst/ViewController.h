//
//  ViewController.h
//  SqlTEst
//
//  Created by IMPROLABS PTE LTD on 12/8/15.
//  Copyright © 2015 IMPROLABS PTE LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;

- (IBAction)addNewRecord:(id)sender;

@end

