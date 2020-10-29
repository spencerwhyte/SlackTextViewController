//
//  SlackTextViewController
//  https://github.com/slackhq/SlackTextViewController
//
//  Copyright 2014-2016 Slack Technologies, Inc.
//  Licence: MIT-Licence
//

#if __has_include(<UIKit/UIKit.h>)
#import <UIKit/UIKit.h>

/** @name UIResponder additional features used for SlackTextViewController. */
@interface UIResponder (SLKAdditions)

/**
 Returns the current first responder object.
 
 @return A UIResponder instance.
 */
+ (nullable instancetype)slk_currentFirstResponder;

@end
#endif