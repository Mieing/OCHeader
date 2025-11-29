@class IESECLiveGoodsListViewModelV2, IESECLiveGoodsListDataStore, IESECLiveContext;

@interface IESECLiveGoodsListBaseService : NSObject

@property (weak, nonatomic) IESECLiveGoodsListViewModelV2 *viewModel;
@property (weak, nonatomic) IESECLiveGoodsListDataStore *dataStore;
@property (weak, nonatomic) IESECLiveContext *liveContext;

- (id)initWithViewModel:(id)a0 dataStore:(id)a1 liveContext:(id)a2;
- (void)handlePageApiResponse:(id)a0;
- (void)handleGoodsModelDidRefresh;
- (void)handleGoodsListDidRefresh;
- (void)handleCampaignDidUpdate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)setup;

@end
