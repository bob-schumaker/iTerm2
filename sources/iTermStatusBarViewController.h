//
//  iTermStatusBarViewController.h
//  iTerm2SharedARC
//
//  Created by George Nachman on 6/28/18.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@class iTermStatusBarLayout;
@class iTermVariableScope;

@interface iTermStatusBarViewController : NSViewController

@property (nonatomic, readonly) iTermStatusBarLayout *layout;
@property (nonatomic, readonly) iTermVariableScope *scope;

- (instancetype)initWithLayout:(iTermStatusBarLayout *)layout
                         scope:(iTermVariableScope *)scope NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithNibName:(nullable NSNibName)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

- (void)variablesDidChange:(NSSet<NSString *> *)names;

@end

NS_ASSUME_NONNULL_END
