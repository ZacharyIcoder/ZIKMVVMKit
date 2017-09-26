//
//  ZIKMVVMCollectionViewModelProtocol.h
//  Mobileyx
//
//  Created by ZIKong on 2017/5/19.
//  Copyright © 2017年 youhui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ZIKMVVMCollectionViewModelProtocol <NSObject>

@required

- (void)handleWithCollectionView:(UICollectionView *)collectionView;
- (void)getDataWithModelArray:(id (^)(void))modelArrayBlock completion:(void (^)(void))completion;

@end
