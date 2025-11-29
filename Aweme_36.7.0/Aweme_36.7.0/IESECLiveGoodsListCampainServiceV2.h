@class IESECGCDTimer;

@interface IESECLiveGoodsListCampainServiceV2 : IESECLiveGoodsListBaseServiceV2

@property (retain, nonatomic) IESECGCDTimer *campaignTimer;

- (void)handleCampaignDidUpdate;
- (void)goodsListDidRefreshWithInfo:(id)a0 success:(BOOL)a1;
- (void)handleGoodsModelDidRefreshWithEvent:(id)a0;
- (void)handleCampaignTimerIfNeeded;
- (void)cancelCampaignTimerIfNeeded;
- (BOOL)hasCampaign:(id)a0;
- (void)setupCampaignTimer;
- (void)handleCampaignRefresh;
- (id)decreaseCampaignResultsForGoodsModels:(id)a0;
- (id)decreaseCampaignAndReturnExpiredProductIDs:(id)a0;
- (void).cxx_destruct;
- (void)stop;

@end
