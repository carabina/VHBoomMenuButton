//
//  VHSimpleCicleButton.h
//  VHBoomMenuExample
//
//  Created by 黄伟平 on 16/7/28.
//  Copyright © 2016年 黄伟平. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VHUtils.h"
#import "VHDefaults.h"
#import "VHBoomButton.h"
#import "VHButtonClickDelegate.h"

@interface VHSimpleCircleButton : VHBoomButton

@property (nonatomic        ) CGFloat               shadowRadius;
@property (nonatomic        ) CGSize                shadowOffset;
@property (nonatomic        ) CGFloat               shadowOpacity;
@property (nonatomic        ) UIColor               *shadowColor;

@property (nonatomic        ) CGFloat               buttonRadius;

@property (nonatomic        ) NSString              *imageNormal;
@property (nonatomic        ) NSString              *imagePressed;
@property (nonatomic        ) UIColor               *buttonNormalColor;
@property (nonatomic        ) UIColor               *buttonPressedColor;
@property (nonatomic        ) UIColor               *imageNormalTintColor;
@property (nonatomic        ) UIColor               *imagePressedTintColor;

@property (nonatomic        ) UIImageView           *image;
@property (nonatomic, strong) CAShapeLayer          *buttonCircle;

@property (nonatomic,       ) int                   index;

@property (nonatomic, weak  ) id<VHButtonClickDelegate> delegate;

/**
 *  Init simple circle button with all properties.
 *
 *  @param imageNormal           <#imageNormal description#>
 *  @param imagePressed          <#imagePressed description#>
 *  @param normalColor           <#normalColor description#>
 *  @param pressedColor          <#pressedColor description#>
 *  @param imageNormalTintColor  <#imageNormalTintColor description#>
 *  @param imagePressedTintColor <#imagePressedTintColor description#>
 *  @param buttonRadius          <#buttonRadius description#>
 *  @param shadowRadius          <#shadowRadius description#>
 *  @param shadowOffset          <#shadowOffset description#>
 *  @param shadowOpacity         <#shadowOpacity description#>
 *  @param shadowColor           <#shadowColor description#>
 *  @param delegate              <#delegate description#>
 *  @param index                 <#index description#>
 *
 *  @return <#return value description#>
 */
- (instancetype)initWithImage:(NSString *)imageNormal
                 pressedImage:(NSString *)imagePressed
                  normalColor:(UIColor *)normalColor
                 pressedColor:(UIColor *)pressedColor
         imageNormalTintColor:(UIColor *)imageNormalTintColor
        imagePressedTintColor:(UIColor *)imagePressedTintColor
                 buttonRadius:(CGFloat)buttonRadius
                 shadowRadius:(CGFloat)shadowRadius
                 shadowOffset:(CGSize) shadowOffset
                shadowOpacity:(CGFloat)shadowOpacity
                  shadowColor:(UIColor *)shadowColor
                 withDelegate:(id<VHButtonClickDelegate>) delegate
                           at:(int)index;
@end
