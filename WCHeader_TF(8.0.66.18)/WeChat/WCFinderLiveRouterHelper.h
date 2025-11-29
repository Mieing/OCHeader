@interface WCFinderLiveRouterHelper : WCFinderRouterHelper

+ (void)openProductWithParam:(id)a0;
+ (void)openProductWithParam:(id)a0 fromSourceViewController:(id)a1;
+ (void)addHotSaleInfosOfProductID:(unsigned long long)a0 pageType:(unsigned long long)a1 taskID:(id)a2 toWAAppOpenParameter:(id)a3 handleWrapper:(id)a4;
+ (id)weAppReplayWidgetParameterWithGoods:(id)a0 taskID:(id)a1;
+ (BOOL)autoOpenFinderLiveFrom:(id)a0 openParams:(id)a1 extraParams:(id)a2;
+ (id)defaultJumpInfoModel;
+ (void)openShopCard:(id)a0 query:(id)a1 entranceGMsgID:(id)a2 scene:(unsigned long long)a3 sceneNode:(id)a4 from:(id)a5;

@end
