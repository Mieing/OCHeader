@interface ACCResponder : NSObject

+ (id)topViewControllerForView:(id)a0;
+ (id)topNavigationControllerForResponder:(id)a0;
+ (BOOL)isTopViewController:(id)a0;
+ (id)topViewControllerForController:(id)a0;
+ (id)topViewControllerForResponder:(id)a0;
+ (id)mainAppWindow;
+ (void)closeTopViewControllerWithAnimated:(BOOL)a0;
+ (id)topViewControllerFromDelegateWindow;
+ (id)topViewController;
+ (id)topView;

@end
