@interface IESECGoodsDetailDataController : NSObject

+ (void)updateCommentLikeWithCommentID:(id)a0 like:(BOOL)a1 completion:(id /* block */)a2;
+ (void)reservationGoodsIdentifier:(id)a0 productID:(id)a1 goodsItemID:(id)a2 goodsOwnerID:(id)a3 secKOLID:(id)a4 metaParam:(id)a5 reservationAction:(BOOL)a6 openWithSaaS:(BOOL)a7 completionBlock:(id /* block */)a8;
+ (void)requestDynamicGroupBuyInfoWithPromotionID:(id)a0 KOLID:(id)a1 addition:(id)a2 completion:(id /* block */)a3;
+ (void)autoGetCouponsWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestWhenStayGoodDetailWithDomainParams:(id)a0;
+ (void)getGoodsDetailWithParams:(id)a0 requestTargetPromotionID:(id)a1 host:(id)a2 APIPath:(id)a3 enableCache:(BOOL)a4 cacheKey:(id)a5 openWithSaaS:(BOOL)a6 completion:(id /* block */)a7 metricsBlock:(id /* block */)a8;
+ (id)cacheTime:(id)a0;
+ (void)requestGoodsDetailWithParams:(id)a0 APIURLString:(id)a1 openWithSaaS:(BOOL)a2 modelClass:(Class)a3 completion:(id /* block */)a4 metricsBlock:(id /* block */)a5;
+ (void)requestDynamicGroupBuyInfo:(id)a0 completion:(id /* block */)a1;
+ (void)fetchShopRecommendWithParams:(id)a0 openWithSaas:(BOOL)a1 completion:(id /* block */)a2;
+ (void)fetchMoreProductsWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestReplayVideoInfoWithParams:(id)a0 openWithSaas:(BOOL)a1 completion:(id /* block */)a2;
+ (void)getGoodsDetailWithPromotionIDs:(id)a0 itemID:(id)a1 currAddrID:(id)a2 requestTargetPromotionID:(id)a3 metaParams:(id)a4 addition:(id)a5 openWithSaaS:(BOOL)a6 completion:(id /* block */)a7 metricsBlock:(id /* block */)a8;
+ (void)updateCommentDislikeWithCommentID:(id)a0 dislike:(BOOL)a1 completion:(id /* block */)a2;
+ (void)reportCpsTrack:(id)a0 productID:(id)a1 reportType:(id)a2 completion:(id /* block */)a3;
+ (void)requestPromotionDetailInfoWithPromotionID:(id)a0 metaParam:(id)a1 enterFrom:(id)a2 commonMeta:(id)a3 openWithSaaS:(BOOL)a4 completion:(id /* block */)a5;
+ (void)requestSearchWordWithBussinessID:(id)a0 wordSource:(id)a1 productID:(id)a2 completion:(id /* block */)a3;
+ (void)requestShopGuideInfoWithCompletion:(id /* block */)a0;
+ (void)updateUserGoodsLikeWithParams:(id)a0 like:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestShareFissionBackFlowWithParams:(id)a0;
+ (void)requestGoodsDetailPreloadWithParams:(id)a0 openWithSaaS:(BOOL)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3;

@end
