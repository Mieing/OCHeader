@interface AWEEcomSearchViewHelper : NSObject

+ (void)sendMiddlePageTopBgInfoRequest:(id)a0 uid:(id)a1 resetImageBlock:(id /* block */)a2;
+ (void)markViewTheme:(id)a0 forceLight:(BOOL)a1;
+ (id)applyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftRightCorner:(double)a1;
+ (void)sendSaasMiddlePageTopBgInfoRequest:(id)a0 uid:(id)a1 resetImageBlock:(id /* block */)a2;
+ (void)sendSaasEcomSearchSkinShowTracker:(id)a0 isCache:(BOOL)a1 styleId:(id)a2;
+ (id)getEcomMiddlePageTopBgModelInfo:(id)a0;
+ (void)sendNoSaasEcomSearchSkinShowTracker:(id)a0 isCache:(BOOL)a1 styleId:(id)a2;
+ (void)sendNoSaasMiddlePageTopBgInfoRequest:(id)a0 uid:(id)a1 resetImageBlock:(id /* block */)a2;

@end
