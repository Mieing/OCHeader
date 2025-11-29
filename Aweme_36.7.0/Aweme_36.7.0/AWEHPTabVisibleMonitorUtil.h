@interface AWEHPTabVisibleMonitorUtil : NSObject

+ (id)getTabBarController;
+ (void)uploadAlog;
+ (unsigned long long)topBarInvisibleType;
+ (unsigned long long)tabBarInvisibleType;
+ (id)getTheViewControllerHierarchy:(id)a0 tabBarController:(id)a1;
+ (BOOL)isOtherMode;
+ (id)getTopBarContainer;
+ (void)uploadUITree;
+ (void)recoverTopBarHidden;
+ (void)recoverTopBarAlpha;
+ (void)recoverTabBarHidden;
+ (void)recoverTabBarAlpha;
+ (id)getWindowTopSubView:(id)a0;
+ (unsigned long long)viewInvisibleType:(id)a0;
+ (id)getTopSubView:(id)a0 withPoint:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)isRootViewController:(id)a0 tabBarController:(id)a1;

@end
