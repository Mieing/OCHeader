@class NSArray, AWELiveShelfListSectionController, NSString, AWELiveShelfListSectionViewModel, AWELiveShelfPagingDataController;

@interface AWELiveShelfListViewModel : AWEBaseListViewModel <AWELiveShelfListSectionControllerDelegate>

@property (nonatomic) BOOL hasConfigModule;
@property (weak, nonatomic) AWELiveShelfPagingDataController *dataController;
@property (retain, nonatomic) AWELiveShelfListSectionViewModel *sectionVM;
@property (retain, nonatomic) AWELiveShelfListSectionController *sectionController;
@property (nonatomic) BOOL isRemoveOffset;
@property (copy, nonatomic) NSArray *adjustModelsArray;
@property (nonatomic) BOOL headerShow;
@property (nonatomic) long long headerState;
@property (nonatomic) long long footerState;
@property (nonatomic) BOOL isClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)trackADEventWithLabel:(id)a0 refer:(id)a1 adExtraParams:(id)a2;
- (void)cardWillDisplayWithItem:(id)a0 index:(long long)a1;
- (void)cardClickedWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (void)cardBuyBtnClickedWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (BOOL)couldCardBuyBtnClickedOnlyLogWithItem:(id)a0 index:(long long)a1 isNative:(BOOL)a2 lynxParams:(id)a3;
- (void)refreshCurrentState;
- (void)configLynxModuleBlock;
- (id)getGoodsModelsBy:(id)a0;
- (void)updateFromPartMessage:(id)a0 tabId:(long long)a1;
- (void)finishUpdateListWith:(unsigned long long)a0 cardList:(id)a1;
- (void)endFetchingListData;
- (void)updateFromLynxModule:(id)a0 tabId:(long long)a1;
- (void)clickCardTracker:(id)a0 item:(id)a1 paramsBlock:(id /* block */)a2 actionBlock:(id /* block */)a3 btmInfo:(id)a4 isCreateChain:(BOOL)a5;
- (id)paramsForClickWithItem:(id)a0;
- (id)trackAppendCouponParam:(id)a0;
- (id)createLiveInfoWithModel:(id)a0;
- (void)checkPreloadPreviousOrNextPage:(long long)a0;
- (void)trackerWithEvent:(id)a0 item:(id)a1 paramsBlock:(id /* block */)a2;
- (id)trackAppendSeckillParamWithItem:(id)a0 flashStatus:(unsigned long long)a1;
- (void)trackCardShowWithItem:(id)a0 locationStr:(id)a1 extraParam:(id)a2;
- (BOOL)shouldSendCardShowTrack:(id)a0 preVisibleCardList:(id)a1;
- (id)getGoodsModelBy:(id)a0;
- (id)createCellViewModelWithItem:(id)a0 isTopItem:(BOOL)a1;
- (void)trackerWithEvent:(id)a0 paramsBlock:(id /* block */)a1;
- (void)trackerWithEvent:(id)a0 item:(id)a1 paramsBlock:(id /* block */)a2 btmInfo:(id)a3 isCreateChain:(BOOL)a4;
- (void)clickCardTracker:(id)a0 item:(id)a1 extraParam:(id)a2 paramsBlock:(id /* block */)a3 actionBlock:(id /* block */)a4 btmInfo:(id)a5 isCreateChain:(BOOL)a6;
- (void)sendTrackCardShowWithItem:(id)a0 locationStr:(id)a1 extraParam:(id)a2;
- (void)updateWithModel:(id)a0 refreshModel:(id)a1 pageLoading:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateWithTabCardManagerModel:(id)a0;
- (BOOL)scrollToProduct:(id)a0 atPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)getVisibleIndexPaths;
- (void).cxx_destruct;
- (id)init;

@end
