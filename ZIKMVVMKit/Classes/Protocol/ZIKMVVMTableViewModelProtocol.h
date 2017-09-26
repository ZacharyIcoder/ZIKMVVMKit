//
//  ZIKMVVMTableViewModelProtocol.h
//  Mobileyx
//
//  Created by ZIKong on 2017/6/1.
//  Copyright © 2017年 youhui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ZIKMVVMTableViewModelProtocol <NSObject>

- (void)handleWithTable:(UITableView *)table;

- (void)getDataWithModelArray:(id (^)(void))modelArrayBlock
                   completion:(void (^)(void))completion;
@end
