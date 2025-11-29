@interface IESECNotice : NSObject

+ (void)postLiveUserHasPurchaseIntentionNotice;
+ (void)enterHalfScreenMode;
+ (void)enterNormalScreenMode;
+ (void)pauseLiveScreenShotObserver;
+ (void)resumeLiveScreenShotObserver;
+ (void)setEnableFullScreenMode:(BOOL)a0;
+ (void)willQuitGoodsDetailViewWithParams:(id)a0;
+ (void)quitGoodsDetailViewWithParams:(id)a0;
+ (void)enterGoodsDetailViewWithParams:(id)a0;

@end
