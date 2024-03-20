//
//  SlackTextViewController
//  https://github.com/slackhq/SlackTextViewController
//
//  Copyright 2014-2016 Slack Technologies, Inc.
//  Licence: MIT-Licence
//
#if __has_include(<UIKit/UIKit.h>)
#import <UIKit/UIKit.h>
#import "SLKTypingIndicatorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/** @name A custom view to display an indicator of users typing. */
@interface SLKTypingIndicatorView : UIView <SLKTypingIndicatorProtocol>

/** The amount of time a name should keep visible. If is zero, the indicator will not remove nor disappear automatically. Default is 6.0 seconds*/
@property (nonatomic, readwrite) NSTimeInterval interval;

/** If YES, the user can dismiss the indicator by tapping on it. Default is NO. */
@property (nonatomic, readwrite) BOOL canResignByTouch;

/** The color of the text. Default is grayColor. */
@property (nonatomic, strong) UIColor *textColor;

/** The color of the highlighted text. Default is grayColor. */
@property (nonatomic, strong) UIColor *highlightTextColor;

/** The font of the text. Default is system font, 12 pts. */
@property (nonatomic, strong) UIFont *textFont;

/** The font to be used when matching a username string. Default is system bold font, 12 pts. */
@property (nonatomic, strong) UIFont *highlightFont;

/** The inner padding to use when laying out content in the view. Default is {10, 40, 10, 10}. */
@property (nonatomic, assign) UIEdgeInsets contentInset;

- (void)updateText:(NSString *_Nullable)text;

@end

NS_ASSUME_NONNULL_END
#endif
