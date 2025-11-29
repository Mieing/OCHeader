@interface MMStatusBarCustomInfo : NSObject

@property (nonatomic) BOOL overrideStatusBarHidden;
@property (nonatomic) long long overrideStatusBarStyle;
@property (nonatomic) long long overrideStatusBarAnimation;
@property (nonatomic) BOOL shouldOverrideStatusBarHidden;
@property (nonatomic) BOOL shouldOverrideStatusBarStyle;
@property (nonatomic) BOOL shouldOverrideStatusBarAnimation;

- (void)reset;

@end
