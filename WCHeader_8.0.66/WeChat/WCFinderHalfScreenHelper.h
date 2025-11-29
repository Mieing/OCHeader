@class WCFinderHalfScreenAnimateCtx;

@interface WCFinderHalfScreenHelper : NSObject

@property (class, retain, nonatomic) WCFinderHalfScreenAnimateCtx *animatedCtx;

+ (void)beginAnimatedWithCtx:(id)a0 block:(id /* block */)a1;
+ (void)bindListenAnimProgressFromVC:(id)a0 toHalfVC:(id)a1;
+ (id)getBindObjectModelFromVC:(id)a0;
+ (id)getBindObjectModelFromVC:(id)a0 toHalfVC:(id)a1;
+ (id)getBindCellModelFromVC:(id)a0;
+ (BOOL)halfScreenIsDownByLastProgress:(double)a0 curProgress:(double)a1;
+ (double)getHalfScreenHeightPercentByMediaWidHeightRatio:(double)a0;
+ (void)bindHalfMiniAppFromVC:(id)a0 fromContentVM:(id)a1 openParams:(id)a2 handlerWraper:(id)a3;
+ (void)bindHalfMiniStoreFromVC:(id)a0 fromContentVM:(id)a1 openParams:(id)a2;
+ (id)handleMiniAppEventVCWith:(id)a0;

@end
