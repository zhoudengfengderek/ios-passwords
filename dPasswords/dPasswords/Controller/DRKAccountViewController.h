//
//  DRKAccountViewController.h
//  dPasswords
//
//  Created by zhou dengfeng derek on 30/7/14.
//  Copyright (c) 2014 Zhou Dengfeng Derek. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DRKAccount;
@class DRKUser;

@interface DRKAccountViewController : UITableViewController
@property (nonatomic, strong) DRKUser *user;
@property (nonatomic, strong) DRKAccount *account;
@end
