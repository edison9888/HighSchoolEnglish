//
//  ListenViewController.h
//  HighSchoolEnglish
//
//  Created by Ibokan on 13-1-5.
//  Copyright (c) 2013年 Ibokan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListViewController.h"
#import "ManyListenViewController.h"

@interface ListenViewController : UIViewController
@property(assign,nonatomic) int grade;

- (IBAction)gotoList:(UIButton *)sender;
@end
