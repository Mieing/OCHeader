@interface BSTViewUtils : NSObject

+ (BOOL)bstEnableToTrackWithExposureScale:(double)a0 ofView:(id)a1;
+ (BOOL)bstDidDisplayedOfView:(id)a0;
+ (void)clearCacheOfView:(id)a0;
+ (BOOL)bstViewVisibleOfView:(id)a0;
+ (BOOL)isInCurrentTopPageForView:(id)a0;
+ (BOOL)bstIsInKeyWindowForView:(id)a0 withImpressionScale:(double)a1;
+ (BOOL)bstIsShadedByView:(id)a0 impressionScale:(double)a1 forOriginView:(id)a2;
+ (BOOL)bstIsShadedByViews:(id)a0 impressionScale:(double)a1 forbiddenTraverse:(BOOL)a2 forOriginView:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bstFrameOfView:(id)a0;
+ (id)bstSubViewWithBtmIdOfView:(id)a0;

@end
