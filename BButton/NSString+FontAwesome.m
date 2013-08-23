//
//  NSString+FontAwesome.m
//
//  Created by Pit Garbe on 27.09.12.
//  Updated to Font Awesome 3.1.1 on 17.05.2013.
//  Copyright (c) 2012 Pit Garbe. All rights reserved.
//
//  https://github.com/leberwurstsaft/FontAwesome-for-iOS
//
//
//  * The Font Awesome font is licensed under the SIL Open Font License
//  http://scripts.sil.org/OFL
//
//
// * Font Awesome CSS, LESS, and SASS files are licensed under the MIT License
//  http://opensource.org/licenses/mit-license.html
//
//
//  * The Font Awesome pictograms are licensed under the CC BY 3.0 License
//  http://creativecommons.org/licenses/by/3.0
//
//
//  * Attribution is no longer required in Font Awesome 3.0, but much appreciated:
//  "Font Awesome by Dave Gandy - http://fortawesome.github.com/Font-Awesome"
//
//
//  -----------------------------------------
//  Edited and refactored by Jesse Squires on 2 April, 2013.
//
//  http://github.com/jessesquires/BButton
//
//  http://hexedbits.com
//

#import "NSString+FontAwesome.h"

@implementation NSString (FontAwesome)

+ (NSString *)stringFromAwesomeIcon:(FAIcon)icon
{
    unichar ch = (unichar)icon;
    return [NSString stringWithCharacters:&ch length:1];
}

- (NSString *)trimWhitespace
{
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

- (BOOL)isEmpty
{
    return [[self trimWhitespace] isEqualToString:@""];
}

@end