@interface WAIpadAdaptLogic : MMObject

+ (BOOL)checkIfNeedIpadSpecialPresentLogic:(id)a0 PresentingVC:(id *)a1;
+ (BOOL)currentOrLastNavigationControllerHasPrevWeAppVC:(id)a0;
+ (BOOL)IsPresentedByMainViewControllerInIpad:(id)a0;
+ (id)IsPresentedByAnotherWeApp:(id)a0;
+ (BOOL)needIpadCustomTransition:(BOOL)a0;
+ (BOOL)isWebviewControllerPageOrientationNotSameAsCurOri:(id)a0;
+ (double)GetScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)a0;
+ (double)GetMinScaleValueForUnresizableWeAppOnIpadWithWebviewController:(id)a0;
+ (struct CGSize { double x0; double x1; })GetWebviewControllerSizeAfterAdapting:(id)a0;
+ (double)GetKeyboardHeightOnIPadUnresizableAppWithSystemHeight:(double)a0 webVC:(id)a1;

@end
