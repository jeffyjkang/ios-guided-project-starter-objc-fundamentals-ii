//
//  LSITipController.h
//  Tips
//
//  Created by Jeff Kang on 3/27/21.
//  Copyright © 2021 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

// forward class declaration, instead of header import (generally faster)
@class LSITip;

NS_ASSUME_NONNULL_BEGIN

@interface LSITipController : NSObject

@property (nonatomic, readonly, copy) NSArray<LSITip *> *tips;

@property (nonatomic, readonly) NSUInteger tipCount;

- (LSITip *)tipAtIndex:(NSUInteger)index;

- (void)addTip:(LSITip *)aTip;

@end

NS_ASSUME_NONNULL_END
