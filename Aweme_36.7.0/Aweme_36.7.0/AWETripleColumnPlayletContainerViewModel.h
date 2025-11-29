@class NSMutableArray, NSString, AWEPlayletCardDataController, AWEPlayletSkyLightSectionSectionViewModel, AWEPlayletTracker, AWEPlayletPageContext, AWETripleColumnPlayletSectionViewModel;

@interface AWETripleColumnPlayletContainerViewModel : AWEBaseListViewModel <AWEPlayletFeedDataControllerDelegate>

@property (retain, nonatomic) AWEPlayletCardDataController *dataController;
@property (retain, nonatomic) AWETripleColumnPlayletSectionViewModel *playletMoreFeedSectionViewModel;
@property (retain, nonatomic) AWETripleColumnPlayletSectionViewModel *playletRecommendSectionViewModel;
@property (retain, nonatomic) AWEPlayletSkyLightSectionSectionViewModel *skyLightSectionSectionViewModel;
@property (nonatomic) long long moreFeedDataState;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (nonatomic) BOOL loadRecommendWithNoMoreData;
@property (nonatomic) BOOL hasTrackerShow;
@property (nonatomic) double insertLynxDataTimeInterval;
@property (nonatomic) double viewCreatedTime;
@property (nonatomic) double feedDataReadyTime;
@property (nonatomic) double skyLightReadyTime;
@property (nonatomic) double firstCardEndDisplayTime;
@property (nonatomic) BOOL hasShowPlaceholderCardData;
@property (copy, nonatomic) NSString *cacheFailReason;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (retain, nonatomic) NSMutableArray *cardReportStateArray;
@property (nonatomic) double initTimeInterval;
@property (nonatomic) double creatTabTimeInterval;
@property (nonatomic) BOOL isPlaceholderCardData;
@property (nonatomic) BOOL isPlayletTab;
@property (nonatomic) BOOL isFirstTimeFetchLynxData;
@property (nonatomic) long long topTabOrder;
@property (nonatomic) BOOL isContainerVisibleToUser;
@property (copy, nonatomic) id /* block */ initFetchCompletion;
@property (copy, nonatomic) id /* block */ skylightLoadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreListData;
- (void)setupViewModel;
- (void)lynxDataDidFinishFetchWithData:(id)a0 withPullType:(long long)a1;
- (void)loadDataHasFinishedWithPullType:(long long)a0;
- (id)getPublicLogExtra;
- (void)requestSkylightAwemeModelListIfNeed;
- (void)lynxViewDidFinishLoadWithContainerHeight:(long long)a0;
- (void)refreshSkylight;
- (void)loadPlaceholderCardDataWithCompletion:(id /* block */)a0;
- (void)initFetchListData;
- (void)refreshListDataWithCompletion:(id /* block */)a0;
- (void)refreshFeedDataForTabClick:(id)a0 loadRecommendWithNoMoreData:(BOOL)a1 isActorCardList:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateAnnieViewWithInsertData:(id)a0;
- (void)preloadMoreFeedIfNeeded:(long long)a0;
- (void)updateFirstCardEndDisplayTimeInterval;
- (void)updateChannelRefreshTrackInfoWithAction:(long long)a0;
- (void)firstLoadDurationMonitorTrack;
- (BOOL)processReturnedData:(id)a0 error:(id)a1;
- (void)preloadCoverWithModelList:(id)a0;
- (void)loadRecommendListData;
- (void)addCardReportStateArrayCapacity:(id)a0;
- (void)skylightReadyTrack;
- (void).cxx_destruct;

@end
