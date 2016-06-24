//
//  SGPickerHeadView.h
//  ZombieMovie
//
//  Created by dujia on 16/6/21.
//  Copyright © 2016年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SGPickerHeadViewDel <NSObject>
- (void) pickPhoto:(id)sender;
- (void) caramePhoto:(id)sender;


@end

@interface SGPickerHeadView : UIView

@property (nonatomic  , weak) id<SGPickerHeadViewDel> delegate;


- (void)setIconImage:(UIImage *)image;

@end