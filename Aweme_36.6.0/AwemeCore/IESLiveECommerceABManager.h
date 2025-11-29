@interface IESLiveECommerceABManager : NSObject

+ (BOOL)enableCardPreload;
+ (BOOL)enableListPreloadForAutoOpen;
+ (BOOL)enableGoodsPreloadForAutoOpen;
+ (BOOL)enableEarlyHandleForEnterRoomFinish;
+ (double)looptimeOfShopCart;
+ (BOOL)enableNewCouponAPI;
+ (BOOL)enableCouponApplyOpt;
+ (id)livePanelHeightPercent;
+ (id)instantLivePanelHeightPercent;
+ (id)ecomSceneAllowList;
+ (BOOL)enableLiveCardAccessSlice;
+ (BOOL)liveListAddOpenPanel;
+ (BOOL)enablePassThroughAddress;
+ (BOOL)enableMoveShopCartActionToCartControlCallBack;
+ (id)ecomCardCoverHostList;
+ (BOOL)enableListCache;
+ (BOOL)enableListViewPreload;
+ (BOOL)enableDelayCompForECAutoOpenView;
+ (BOOL)enableCardPreloadToEC;

@end
