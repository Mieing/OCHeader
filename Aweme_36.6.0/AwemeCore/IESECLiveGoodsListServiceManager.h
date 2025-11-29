@class IESECLiveGoodsListDataStore, IESECLiveContext, NSString, IESECLiveGoodsListViewModelV2;

@interface IESECLiveGoodsListServiceManager : IESECBaseServiceManager <IESECLiveGoodsListDistributionProtocol>

@property (weak, nonatomic) IESECLiveGoodsListViewModelV2 *viewModel;
@property (weak, nonatomic) IESECLiveGoodsListDataStore *dataStore;
@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)handlePageApiResponse:(id)a0;
- (void)handleCampaignDidUpdate;
- (void)liveGoodsListWillAppear;
- (void)liveGoodsListDidAppear;
- (void)liveGoodsListWillDisappear;
- (void)liveGoodsListDidDisappear;
- (void)liveGoodsListDidScroll:(id)a0;
- (void)liveGoodsListWillBeginDragging;
- (void)liveGoodsListwillDisplayCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)liveGoodsListdidEndDisplayingCell:(id)a0 forItemAtIndexPath:(id)a1;
- (void)goodListWillStartMainFetchWithInfo:(id)a0;
- (void)goodListDidStartMainFetchWithInfo:(id)a0;
- (id)paramsForBasicTrackParams;
- (void)goodsListDidRefreshWithInfo:(id)a0 success:(BOOL)a1;
- (void)mainFetchSuccessWithState:(id)a0;
- (void)mainFetchErrorWithState:(id)a0;
- (void)didUpdateFirstPageInfo;
- (void)didTabDataRefreshWithTabSwitched:(BOOL)a0;
- (void)handleGoodsModelDidRefreshWithEvent:(id)a0;
- (void)loadServicesWithContainer:(id)a0 withContext:(id)a1 viewModel:(id)a2 dataStore:(id)a3;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)setup;
- (void)updateContainer:(id)a0;

@end
