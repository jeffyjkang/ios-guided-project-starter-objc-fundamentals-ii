//
//  LSITip.m
//  Tips
//
//  Created by Jeff Kang on 3/27/21.
//  Copyright © 2021 Lambda School. All rights reserved.
//

#import "LSITip.h"

@implementation LSITip

- (instancetype)initWithName:(NSString *)aName
                       total:(double)aTotal
                  splitCount:(NSInteger)aSplitCount
               tipPercentage:(double)aTipPercentage
{
    if (self = [super init]) {
        _name = aName.copy; // [aName copy]
        _total = aTotal;
        _splitCount = aSplitCount;
        _tipPercentage = aTipPercentage;
    }
    return self;
}

@end
