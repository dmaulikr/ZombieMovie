//
//  GGMessageVC.h
//  ZombieMovie
//
//  Created by dujia on 16/7/7.
//  Copyright © 2016年 sun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GGMessageVC : UIViewController
- (instancetype)initWithConversationChatter:(NSString *)conversationChatter
                           conversationType:(EMConversationType)conversationType;
@end