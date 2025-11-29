@interface AWEGrouponHalfScreenContainerService : NSObject

+ (id)getContentVC;
+ (id)createHalfScreenWithFeedUnderTakeData:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })findNativeViewRectWith:(id)a0;
+ (void)trackNearbyHalfScreenAtomMonitor:(id)a0 halfScreenModel:(id)a1 extraParams:(id)a2;
+ (void)trackHalfCloseAnimationMonitor:(id)a0 halfClosedAnimation:(id)a1 pageType:(long long)a2;
+ (void)trackHalfCloseGuideShowWithParam:(id)a0 halfClosedAnimation:(id)a1 pageType:(long long)a2;
+ (void)trackHalfScreenShowEvent:(id)a0 showResult:(BOOL)a1 errorMsg:(id)a2 extraParams:(id)a3;
+ (id)showHalfScreenWithBaseVC:(id)a0 containerModel:(id)a1 completion:(id /* block */)a2 closeHandler:(id /* block */)a3;
+ (id)showHalfScreenWithBaseVC:(id)a0 content:(id)a1 containerModel:(id)a2 completion:(id /* block */)a3 closeHandler:(id /* block */)a4;
+ (id)getContainerVC;
+ (void)trackHalfScreenShowDurationEvent:(id)a0 extraParams:(id)a1;
+ (id)viewInjectorWithStyle:(unsigned long long)a0 targetVC:(id)a1;
+ (void)createHalfScreenContentWithPageType:(long long)a0;
+ (id)getHalfScreenContentURLWithPageType:(long long)a0;
+ (void)mergeHalfScreenConfig:(id)a0 highLevel:(id)a1 lowLevel:(id)a2;
+ (long long)getNonZeroIntegerValueIn:(id)a0 orRight:(id)a1 forKey:(id)a2;
+ (void)createHalfScreenContainerWithPageType:(long long)a0;
+ (id)getHalfScreenPerConfigWithPageType:(long long)a0 routerParams:(id)a1;
+ (void)trackHalfScreenRCVDEvent:(id)a0 extraParams:(id)a1;

@end
