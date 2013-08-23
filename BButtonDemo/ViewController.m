//
//  ViewController.m
//  BButtonDemo
//
//  Created by Jesse Squires on 4/2/13.
//  Copyright (c) 2013 Hexed Bits. All rights reserved.
//
//  http://hexedbits.com
//

#import "ViewController.h"

@interface ViewController ()

- (NSString *)titleForType:(BButtonType)type;

@end

@implementation ViewController

#pragma mark - View lifecycle
- (void)viewDidLoad
{
    [super viewDidLoad];
    
    BButtonType type = 0;
    
    NSArray *icons = FAICON_ARRAY;
    
    for(int i = 0; i < 2; i++) {
        
        for(int j = 0; j < 7; j++) {
            CGRect frame = CGRectMake(32.0f + (i * 144.0f), 20.0f + (j * 60.0f), 112.0f, 40.0f);
            BButton *btn = [[BButton alloc] initWithFrame:frame type:type];
            [btn setTitle:[self titleForType:type] forState:UIControlStateNormal];
            
            if(type == BButtonTypeFacebook)
                [btn addAwesomeIcon:FAIconFacebook beforeTitle:YES];
            else if(type == BButtonTypeTwitter)
                [btn addAwesomeIcon:FAIconTwitter beforeTitle:NO];
            
            type++;
            if(type > BButtonTypeGray) {
                NSNumber *icon = [icons objectAtIndex:(arc4random() % icons.count)];
                btn = [BButton awesomeButtonWithOnlyIcon: [icon intValue]
                                                    type:(type % 2) ? BButtonTypeInverse : BButtonTypeDefault];
                
                btn.frame = CGRectMake(frame.origin.x, frame.origin.y, btn.frame.size.width, btn.frame.size.width);
            }
            
            [btn addTarget:self action:@selector(buttonPressed:) forControlEvents:UIControlEventTouchUpInside];
            
            [self.view addSubview:btn];
        }
    }
}

#pragma mark - Utilities
- (void)buttonPressed:(UIButton *)sender
{
    NSLog(@"Good jorb, you pressed a button: %@", sender.titleLabel.text);
}

- (NSString *)titleForType:(BButtonType)type
{
    NSString *title = nil;
    
    switch (type) {
        case BButtonTypePrimary:
            title = @"Primary";
            break;
        case BButtonTypeInfo:
            title = @"Info";
            break;
        case BButtonTypeSuccess:
            title = @"Success";
            break;
        case BButtonTypeWarning:
            title = @"Warning";
            break;
        case BButtonTypeDanger:
            title = @"Danger";
            break;
        case BButtonTypeInverse:
            title = @"Inverse";
            break;
        case BButtonTypeTwitter:
            title = @"Twitter";
            break;
        case BButtonTypeFacebook:
            title = @"Facebook";
            break;
        case BButtonTypePurple:
            title = @"Purple";
            break;
        case BButtonTypeGray:
            title = @"Gray";
            break;
        case BButtonTypeDefault:
        default:
            title = @"Default";
            break;
    }
    
    return title;
}

@end