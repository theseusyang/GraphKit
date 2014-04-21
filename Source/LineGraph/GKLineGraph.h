//
//  GKLineGraph.h
//  GraphKit
//
//  Created by Michal Konturek on 21/04/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GKLineGraph : UIView

@property (nonatomic, assign) CFTimeInterval animationDuration;
@property (nonatomic, assign) BOOL animated;

- (void)draw;

@end
