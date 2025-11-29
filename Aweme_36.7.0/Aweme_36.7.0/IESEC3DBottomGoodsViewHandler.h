@interface IESEC3DBottomGoodsViewHandler : NSObject

+ (void)handleForDepositReservateWithEnterFrom:(id)a0 roomId:(id)a1 authorId:(id)a2 productId:(id)a3 completion:(id /* block */)a4 confirm:(id /* block */)a5;
+ (void)handleForTimingSaleWithIsReserved:(BOOL)a0 authorId:(id)a1 secAuthorId:(id)a2 startTime:(double)a3 productId:(id)a4 promotionId:(id)a5 goodsTitle:(id)a6 goodsItemID:(id)a7 metaParams:(id)a8 parameters:(id)a9 completionBlock:(id /* block */)a10;
+ (void)handleForAuctionWithPageUrl:(id)a0 baseLogDataDict:(id)a1 orderLogDataDict:(id)a2 creativeId:(id)a3 entranceInfoJSONString:(id)a4 completionBlock:(id /* block */)a5;
+ (void)handleForInsuranceWithPageUrl:(id)a0 followStatus:(id)a1 groupType:(id)a2 authorId:(id)a3 itemID:(id)a4 entranceForm:(id)a5 creativeId:(id)a6 completionBlock:(id /* block */)a7;
+ (void)handleForBuyActionWithSkuInfo:(id)a0 orderURLString:(id)a1 spellGroupId:(id)a2 adInfoDict:(id)a3 logDataDict:(id)a4 entranceInfoDict:(id)a5 marketingChannel:(id)a6 passthroughEventV3Dict:(id)a7 completionBlock:(id /* block */)a8;
+ (void)handleForOpenPageWithLinks:(id)a0 promotionSource:(long long)a1 trackExtra:(id)a2 completion:(id /* block */)a3;

@end
