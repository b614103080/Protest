//
//  ViewController.h
//  MCTest
//
//  Created by John Rogers on 4/5/14.
//  Copyright (c) 2014 John Rogers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ConnectionManager.h"
#import "InternetManager.h"

@interface ProtestViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate> {
    NSMutableArray *tableSource;
}

@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) UIButton *startProtestButton;
@property (nonatomic, strong) InternetManager *internetManager;

- (void)finalTest;
- (void)dismissConfig;
- (void)startChat:(NSString*)name;

@end
