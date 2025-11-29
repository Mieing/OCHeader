@interface AWEStatusBarUtil : NSObject

+ (BOOL)viewControllerBasedStatusBarAppearanceEnabled;
+ (BOOL)currentStatusBarHiddenState;
+ (long long)currentStatusBarStyle;
+ (long long)defaultStatusBarStyle;

@end
