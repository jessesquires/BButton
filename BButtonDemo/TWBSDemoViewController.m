//
//  BButtonDemo
//
//  Created by Jesse Squires on 11/12/13.
//  Copyright (c) 2013 Hexed Bits. All rights reserved.
//

#import "TWBSDemoViewController.h"

@implementation TWBSDemoViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // uncomment to set corner radius for all buttons
    //
    // [[BButton appearance] setButtonCornerRadius:@50.0f];
    
    BButtonType type = 0;
    
    for(int i = 0; i < 2; i++) {
        
        for(int j = 0; j < 7; j++) {
            CGRect frame = CGRectMake(32.0f + (i * 144.0f),
                                      40.0f + (j * 60.0f),
                                      112.0f,
                                      44.0f);
            
            BButton *btn = [[BButton alloc] initWithFrame:frame type:type style:BButtonStyleBootstrapV3];
            [btn setTitle:[self titleForType:type] forState:UIControlStateNormal];
            
            if(type == BButtonTypeFacebook)
                [btn addAwesomeIcon:FAIconFacebook beforeTitle:YES];
            else if(type == BButtonTypeTwitter)
                [btn addAwesomeIcon:FAIconTwitter beforeTitle:NO];
            
            type++;
            if(type > BButtonTypeGray) {
                btn = [BButton awesomeButtonWithOnlyIcon:(arc4random_uniform(0xf20c-0xf000)+0xf000)
                                                    type:(type % 2) ? BButtonTypeInverse : BButtonTypeDefault
                                                   style:BButtonStyleBootstrapV3];
                
                btn.frame = CGRectMake(frame.origin.x, frame.origin.y, btn.frame.size.width, btn.frame.size.width);
            }
            
            [btn addTarget:self action:@selector(buttonPressed:) forControlEvents:UIControlEventTouchUpInside];
            btn.enabled = YES;
            
            [self.view addSubview:btn];
        }
    }
}

- (void)buttonPressed:(UIButton *)sender
{
    NSLog(@"Good job, you pressed a button: %@", sender.titleLabel.text);
}

- (NSString *)titleForType:(BButtonType)type
{
    switch (type) {
        case BButtonTypePrimary:
            return @"Primary";
            
        case BButtonTypeInfo:
            return @"Info";
            
        case BButtonTypeSuccess:
            return @"Success";
            
        case BButtonTypeWarning:
            return @"Warning";
            
        case BButtonTypeDanger:
            return @"Danger";
            
        case BButtonTypeInverse:
            return @"Inverse";
            
        case BButtonTypeTwitter:
            return @"Twitter";
            
        case BButtonTypeFacebook:
            return @"Facebook";
            
        case BButtonTypePurple:
            return @"Purple";
            
        case BButtonTypeGray:
            return @"Gray";
            
        case BButtonTypeDefault:
        default:
            return @"Default";
    }
}

@end
