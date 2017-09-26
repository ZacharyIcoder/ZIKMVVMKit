//
//  ZIKMVVMAbstractTableViewModel.h
//  Mobileyx
//
//  Created by ZIKong on 2017/6/1.
//  Copyright © 2017年 youhui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZIKMVVMTableViewModelProtocol.h"

/**
 *  选中UITableViewCell的Block
 */
typedef void (^DidSelectCellBlock)(NSIndexPath *indexPath, id item) ;

@interface ZIKMVVMAbstractTableViewModel : NSObject<ZIKMVVMTableViewModelProtocol>

@property (nonatomic, copy) DidSelectCellBlock didSelectCellBlock;

@end
