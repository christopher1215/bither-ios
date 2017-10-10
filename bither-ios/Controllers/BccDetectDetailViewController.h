//
//  BccDetectDetailViewController.h
//  bither-ios
//
//  Created by LTQ on 2017/9/28.
//  Copyright © 2017年 Bither. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SendViewController.h"
#import "BTHDAccountAddress.h"
@interface BccDetectDetailViewController : UIViewController

@property BTAddress *btAddress;
@property uint64_t amount;
@property NSArray *outs;
@property PathTypeIndex *pathTypeIndex;
@property BOOL isHDAccount;
@property(weak) NSObject <SendDelegate> *sendDelegate;

@end
