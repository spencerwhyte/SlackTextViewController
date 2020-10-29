//
//  SlackTextViewController
//  https://github.com/slackhq/SlackTextViewController
//
//  Copyright 2014-2016 Slack Technologies, Inc.
//  Licence: MIT-Licence
//

#if __has_include(<UIKit/UIKit.h>)
#import <UIKit/UIKit.h>

@interface SLKInputAccessoryView : UIView

/* The system keyboard view used as reference. */
@property (nonatomic, weak, readonly) UIView *_Nullable keyboardViewProxy;

@end
#endif