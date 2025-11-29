@interface IESECLiveGoodsListLowPriceService : IESECLiveGoodsListBaseService

- (void)handlePageApiResponse:(id)a0;
- (id)handleLowPriceModuleWithMessage:(id)a0;
- (BOOL)handleLowPriceGuideShowWithItem:(id)a0;
- (BOOL)handleLowPriceMessageIfNeedWithItem:(id)a0;
- (BOOL)lowPriceHasShowWithProductID:(id)a0;
- (void)fetchLowPriceProductInfos:(id)a0 productIDs:(id)a1 promotionIDs:(id)a2;
- (void)stop;
- (void)start;

@end
