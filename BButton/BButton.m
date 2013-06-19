//
//  BButton.m
//
//  Created by Mathieu Bolard on 31/07/12.
//  Copyright (c) 2012 Mathieu Bolard. All rights reserved.
//
//  https://github.com/mattlawer/BButton
//
//  Redistribution and use in source and binary forms, with or without modification,
//  are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright notice,
//  this list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
// * Neither the name of Mathieu Bolard, mattlawer nor the names of its contributors
//  may be used to endorse or promote products derived from this software
//  without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
//  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//  IN NO EVENT SHALL Mathieu Bolard BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
//  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
//  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//  -----------------------------------------
//  Edited and refactored by Jesse Squires on 2 April, 2013.
//
//  http://github.com/jessesquires/BButton
//
//  http://hexedbits.com
//

#import "BButton.h"
#import <CoreGraphics/CoreGraphics.h>

@interface BButton ()

@property (assign, nonatomic) CGGradientRef gradient;

- (void)setup;
+ (UIColor *)colorForButtonType:(BButtonType)type;
- (void)setGradientEnabled:(BOOL)enabled;

@end



@implementation BButton

@synthesize color;
@synthesize gradient;
@synthesize shouldShowDisabled;

#pragma mark - Initialization
- (void)setup
{
    self.backgroundColor = [UIColor clearColor];
    self.titleLabel.shadowOffset = CGSizeMake(0.0f, -1.0f);
    self.shouldShowDisabled = NO;
    [self setType:BButtonTypeDefault];
}

- (id)initWithFrame:(CGRect)frame type:(BButtonType)type
{
    return [self initWithFrame:frame color:[BButton colorForButtonType:type]];
}

- (id)initWithFrame:(CGRect)frame type:(BButtonType)type icon:(FAIcon)icon fontSize:(CGFloat)fontSize
{
    return [self initWithFrame:frame
                         color:[BButton colorForButtonType:type]
                          icon:icon
                      fontSize:fontSize];
}

- (id)initWithFrame:(CGRect)frame color:(UIColor *)aColor
{
    self = [self initWithFrame:frame];
    if(self) {
        self.color = aColor;
    }
    return self;
}

- (id)initWithFrame:(CGRect)frame color:(UIColor *)aColor icon:(FAIcon)icon fontSize:(CGFloat)fontSize
{
    self = [self initWithFrame:frame color:aColor];
    if(self) {
        self.titleLabel.font = [UIFont fontWithName:@"FontAwesome" size:fontSize];
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        [self setTitle:[NSString stringFromAwesomeIcon:icon] forState:UIControlStateNormal];
    }
    return self;
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if(self) {
        [self setup];
        self.titleLabel.font = [UIFont boldSystemFontOfSize:17.0f];
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if(self) {
        [self setup];
    }
    return self;
}

- (id)init
{
    self = [super init];
    if(self) {
        [self setup];
    }
    return self;
}

+ (BButton *)awesomeButtonWithOnlyIcon:(FAIcon)icon type:(BButtonType)type
{
    return [BButton awesomeButtonWithOnlyIcon:icon
                                        color:[BButton colorForButtonType:type]];
}

+ (BButton *)awesomeButtonWithOnlyIcon:(FAIcon)icon color:(UIColor *)color
{
    return [[BButton alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 40.0f, 40.0f)
                                    color:color
                                     icon:icon
                                 fontSize:20.0f];
}

#pragma mark - Parent overrides
- (void)setHighlighted:(BOOL)highlighted
{
    [super setHighlighted:highlighted];
    [self setNeedsDisplay];
}

- (void)setEnabled:(BOOL)enabled
{
    [super setEnabled:enabled];
    
    if(self.shouldShowDisabled)
        [self setGradientEnabled:enabled];
    
    [self setNeedsDisplay];
}

#pragma mark - Setters
- (void)setColor:(UIColor *)newColor
{
    color = newColor;
    
    if([newColor isLightColor]) {
        [self setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        [self setTitleShadowColor:[[UIColor whiteColor] colorWithAlphaComponent:0.6f] forState:UIControlStateNormal];
        
        if(self.shouldShowDisabled)
            [self setTitleColor:[UIColor colorWithWhite:0.4f alpha:0.5f] forState:UIControlStateDisabled];
    }
    else {
        [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [self setTitleShadowColor:[[UIColor blackColor] colorWithAlphaComponent:0.6f] forState:UIControlStateNormal];
        
        if(self.shouldShowDisabled)
            [self setTitleColor:[UIColor colorWithWhite:1.0f alpha:0.5f] forState:UIControlStateDisabled];
    }
    
    if(self.shouldShowDisabled)
        [self setGradientEnabled:self.enabled];
    else
        [self setGradientEnabled:YES];
    
    [self setNeedsDisplay];
}

- (void)setShouldShowDisabled:(BOOL)show
{
    shouldShowDisabled = show;
    
    if(show) {
        if([self.color isLightColor])
            [self setTitleColor:[UIColor colorWithWhite:0.4f alpha:0.5f] forState:UIControlStateDisabled];
        else
            [self setTitleColor:[UIColor colorWithWhite:1.0f alpha:0.5f] forState:UIControlStateDisabled];
    }
    else {
        if([self.color isLightColor])
            [self setTitleColor:[UIColor blackColor] forState:UIControlStateDisabled];
        else
            [self setTitleColor:[UIColor whiteColor] forState:UIControlStateDisabled];
    }
}

#pragma mark - BButton
- (void)setType:(BButtonType)type
{
    self.color = [BButton colorForButtonType:type];
}

- (void)addAwesomeIcon:(FAIcon)icon beforeTitle:(BOOL)before
{
    NSString *iconString = [NSString stringFromAwesomeIcon:icon];
    self.titleLabel.font = [UIFont fontWithName:@"FontAwesome"
                                           size:self.titleLabel.font.pointSize];
    
    NSString *title = [NSString stringWithFormat:@"%@", iconString];
    
    if(self.titleLabel.text && ![self.titleLabel.text isEmpty]) {
        if(before)
            title = [title stringByAppendingFormat:@" %@", self.titleLabel.text];
        else
            title = [NSString stringWithFormat:@"%@  %@", self.titleLabel.text, iconString];
    }
    
    [self setTitle:title forState:UIControlStateNormal];
}

+ (UIColor *)colorForButtonType:(BButtonType)type
{
    UIColor *newColor = nil;
    
    switch (type) {
        case BButtonTypePrimary:
            newColor = [UIColor colorWithRed:0.00f green:0.33f blue:0.80f alpha:1.00f];
            break;
        case BButtonTypeInfo:
            newColor = [UIColor colorWithRed:0.18f green:0.59f blue:0.71f alpha:1.00f];
            break;
        case BButtonTypeSuccess:
            newColor = [UIColor colorWithRed:0.32f green:0.64f blue:0.32f alpha:1.00f];
            break;
        case BButtonTypeWarning:
            newColor = [UIColor colorWithRed:0.97f green:0.58f blue:0.02f alpha:1.00f];
            break;
        case BButtonTypeDanger:
            newColor = [UIColor colorWithRed:0.74f green:0.21f blue:0.18f alpha:1.00f];
            break;
        case BButtonTypeInverse:
            newColor = [UIColor colorWithRed:0.13f green:0.13f blue:0.13f alpha:1.00f];
            break;
        case BButtonTypeTwitter:
            newColor = [UIColor colorWithRed:0.25f green:0.60f blue:1.00f alpha:1.00f];
            break;
        case BButtonTypeFacebook:
            newColor = [UIColor colorWithRed:0.23f green:0.35f blue:0.60f alpha:1.00f];
            break;
        case BButtonTypePurple:
            newColor = [UIColor colorWithRed:0.45f green:0.30f blue:0.75f alpha:1.00f];
            break;
        case BButtonTypeGray:
            newColor = [UIColor colorWithRed:0.60f green:0.60f blue:0.60f alpha:1.00f];
            break;
        case BButtonTypeDefault:
        default:
            newColor = [UIColor colorWithRed:0.85f green:0.85f blue:0.85f alpha:1.00f];
            break;
    }
    
    return newColor;
}

#pragma mark - Drawing
- (void)drawRect:(CGRect)rect
{
    [super drawRect:rect];
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    UIColor *border = [self.color darkenColorWithValue:0.06f];
    
    // Shadow Declarations
    UIColor *shadow = [self.color lightenColorWithValue:0.50f];
    CGSize shadowOffset = CGSizeMake(0.0f, 1.0f);
    CGFloat shadowBlurRadius = 2.0f;
    
    // Rounded Rectangle Drawing
    UIBezierPath *roundedRectanglePath = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0.5f, 0.5f, rect.size.width-1.0f, rect.size.height-1.0f)
                                                                    cornerRadius:6.0f];
    
    CGContextSaveGState(context);
    
    [roundedRectanglePath addClip];
    
    CGContextDrawLinearGradient(context,
                                self.gradient,
                                CGPointMake(0.0f, self.highlighted ? rect.size.height - 0.5f : 0.5f),
                                CGPointMake(0.0f, self.highlighted ? 0.5f : rect.size.height - 0.5f), 0.0f);
    
    CGContextRestoreGState(context);
    
    if(!self.highlighted) {
        // Rounded Rectangle Inner Shadow
        CGRect roundedRectangleBorderRect = CGRectInset([roundedRectanglePath bounds], -shadowBlurRadius, -shadowBlurRadius);
        roundedRectangleBorderRect = CGRectOffset(roundedRectangleBorderRect, -shadowOffset.width, -shadowOffset.height);
        roundedRectangleBorderRect = CGRectInset(CGRectUnion(roundedRectangleBorderRect, [roundedRectanglePath bounds]), -1.0f, -1.0f);
        
        UIBezierPath *roundedRectangleNegativePath = [UIBezierPath bezierPathWithRect: roundedRectangleBorderRect];
        [roundedRectangleNegativePath appendPath: roundedRectanglePath];
        roundedRectangleNegativePath.usesEvenOddFillRule = YES;
        
        CGContextSaveGState(context);
        {
            CGFloat xOffset = shadowOffset.width + round(roundedRectangleBorderRect.size.width);
            CGFloat yOffset = shadowOffset.height;
            CGContextSetShadowWithColor(context,
                                        CGSizeMake(xOffset + copysign(0.1f, xOffset), yOffset + copysign(0.1f, yOffset)),
                                        shadowBlurRadius,
                                        shadow.CGColor);
            
            [roundedRectanglePath addClip];
            CGAffineTransform transform = CGAffineTransformMakeTranslation(-round(roundedRectangleBorderRect.size.width), 0.0f);
            [roundedRectangleNegativePath applyTransform: transform];
            [[UIColor grayColor] setFill];
            [roundedRectangleNegativePath fill];
        }
        CGContextRestoreGState(context);
    }
    
    [border setStroke];
    roundedRectanglePath.lineWidth = 1.0f;
    [roundedRectanglePath stroke];
}

- (void)setGradientEnabled:(BOOL)enabled
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    UIColor *topColor = enabled ? [self.color lightenColorWithValue:0.12f] : [self.color darkenColorWithValue:0.12f];
    
    NSArray *newGradientColors = [NSArray arrayWithObjects:(id)topColor.CGColor, (id)self.color.CGColor, nil];
    CGFloat newGradientLocations[] = {0.0f, 1.0f};
    
    gradient = CGGradientCreateWithColors(colorSpace, (__bridge CFArrayRef)newGradientColors, newGradientLocations);
    CGColorSpaceRelease(colorSpace);
}

@end