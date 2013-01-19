//
//  WanXingViewController.h
//  HighSchoolEnglish
//
//  Created by Ibokan on 13-1-7.
//  Copyright (c) 2013年 Ibokan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Questions.h"
#import "WanXing.h"
#import "NSString+Filter.h"
#import "DuoXuan.h"
#import <QuartzCore/QuartzCore.h>

@interface WanXingViewController : UIViewController<NSXMLParserDelegate,UIAlertViewDelegate>
{
    UIScrollView *scrollView;
    UIImageView *imgView;
    char answer[20];
    NSString *wanxingContain;
    BOOL isDown;
    UITextView *message;
    NSString *msg;
    NSString *title;
    UIImageView *imgV;
}

@property(assign,nonatomic) int i,titleType;
@property(assign,nonatomic) BOOL isWrong;
@property(retain,nonatomic)Questions *question;
@property(retain,nonatomic) NSArray *arr;
@property(retain,nonatomic) NSString *strTitle;

@property(retain,nonatomic) NSMutableString *str;
@property(retain,nonatomic) NSMutableArray *array;
@property(retain,nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) IBOutlet UITextView *containView;
@property (retain, nonatomic) IBOutlet UIButton *downButton;
@property (retain, nonatomic) IBOutlet UIButton *nextBut;

- (IBAction)downBut:(UIButton *)sender;
- (IBAction)nextButton:(UIButton *)sender;

@end
