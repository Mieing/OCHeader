@class IESECGCDTimer;

@interface IESECLiveGoodsListCampainService : IESECLiveGoodsListBaseService

@property (retain, nonatomic) IESECGCDTimer *campaignTimer;

- (void)handleGoodsModelDidRefresh;
- (void)handleGoodsListDidRefresh;
- (void)handleCampaignDidUpdate;
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
