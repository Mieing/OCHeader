@interface BDAResponderHelper : NSObject

+ (id)mainWindowRootViewController;
+ (BOOL)_isPadDevice;
+ (double)paddingForViewWidth:(double)a0;
+ (BOOL)_isPadProDevice;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })splitViewFrameForView:(id)a0;
+ (struct CGSize { double x0; double x1; })applicationSize;
+ (id)topViewControllerFor:(id)a0;
+ (id)correctTopViewControllerFor:(id)a0;
+ (id)topNavigationControllerFor:(id)a0;
+ (id)correctTopNavigationControllerFor:(id)a0;
+ (id)topmostView;
+ (id)correctTopmostView;
+ (id)correctTopmostViewController;
+ (id)topmostViewController;
+ (struct CGSize { double x0; double x1; })screenSize;
+ (struct CGSize { double x0; double x1; })windowSize;
+ (struct CGSize { double x0; double x1; })screenResolution;
+ (id)mainWindow;

@end
