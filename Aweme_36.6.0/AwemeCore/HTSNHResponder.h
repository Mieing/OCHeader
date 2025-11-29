@interface HTSNHResponder : NSObject

+ (id)topViewControllerForController:(id)a0;
+ (id)rootVC;
+ (id)topViewControllerFor:(id)a0;
+ (id)topNavigationControllerFor:(id)a0;
+ (id)topmostView;
+ (id)currentShowViewController;
+ (void)addIgnoreResponder:(id)a0;
+ (id)ignoreList;
+ (void)removeIgnoreResponder:(id)a0;
+ (id)topmostViewController;
+ (id)topViewController;
+ (id)applicationWindow;

@end
