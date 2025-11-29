@interface AWEInvalidViewChecker : NSObject

+ (id)viewWithRecursiveSubviews:(id)a0 depth:(long long)a1 clipsViewArray:(id)a2 superViewArray:(id)a3;
+ (BOOL)checkIfViewInWindow:(id)a0;
+ (BOOL)checkIfViewClipped:(id)a0 withClipsViewArray:(id)a1;
+ (BOOL)checkIfSuperViewCovered:(id)a0 withSuperViewArray:(id)a1;
+ (void)printView:(id)a0 depth:(long long)a1 info:(id)a2;
+ (id)ivarNameForView:(id)a0;
+ (id)ivarNameForView:(id)a0 withSuperView:(id)a1;
+ (id)ivarNameFormSuperView:(id)a0 subView:(id)a1;
+ (id)viewControllerFromView:(id)a0;
+ (void)checkInvalidViewInKeyWindow;

@end
