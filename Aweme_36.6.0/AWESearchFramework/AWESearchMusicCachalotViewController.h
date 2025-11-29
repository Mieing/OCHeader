@class AWESearchUtility, AWESearchCachalotLynxPipeline, AWESearchMusicListenMusicPlayerManager, NSDictionary, NSString, AWESearchMusicCachalotDataController, NSNumber;
@protocol AWESearchMusicsPlayerDelegateCachalot;

@interface AWESearchMusicCachalotViewController : AWESearchResultVerticalBaseViewController <BTMPageManagableProtocol, AWESearchMusicVCPlayerManagerValueProtocol, AWESearchMusicListenMusicPlayerManagerDelegate, AWESearchMusicCachalotDataControllerDelegate, AWESearchMusicSortTabViewDelegate, AWESearchMusicPlayAllViewDelegate, AWESearchDynamicPreLayoutProtocol>

@property (retain, nonatomic) AWESearchCachalotLynxPipeline *lynxPipeline;
@property (nonatomic) BOOL iStopBySelectMusic;
@property (retain, nonatomic) AWESearchMusicListenMusicPlayerManager *listenMusicPlayerManager;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) AWESearchUtility *searchUtility;
@property (copy, nonatomic) id /* block */ playerManagerLoadmoreComplete;
@property (weak, nonatomic) id<AWESearchMusicsPlayerDelegateCachalot> playerDelegate;
@property (nonatomic) BOOL isAuthorMusicSearch;
@property (nonatomic) BOOL fromGeneralSearchMoreClick;
@property (retain, nonatomic) AWESearchMusicCachalotDataController *musicDataController;
@property (retain, nonatomic) NSNumber *authorMusicSearchOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (void)preprocessModel:(id)a0;

- (id)enterFrom;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)currentTimeStr;
- (void)lynxAnimationStartWithNotification:(id)a0;
- (id)searchEnterMethod;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (id)getCurrentSearchId;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 animated:(BOOL)a4 completion:(id /* block */)a5;
- (id)getCurrentLogId;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)attributesForTrackSearchEventWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2;
- (void)customLoadmoreResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (id)customContainerConfig;
- (Class)customDataControllerClass;
- (void)customComponentWillBeginRenderWithViewModel:(id)a0;
- (void)customHandleResponseDataModelsReadyBlock:(id)a0 withParams:(id)a1 isLoadMore:(BOOL)a2;
- (void)customBeforeReloadCahcalotWithData:(id)a0 params:(id)a1;
- (BOOL)customShouldTurnOnAutoPreloadMoreWhenEndRefreshingCompleted;
- (void)setBeforeBuildRefreshRequestBlock:(id /* block */)a0;
- (void)resetPlayerInfo:(BOOL)a0;
- (BOOL)checkIfExistCurrentLunaInfo:(id)a0;
- (void)addingPlayerInfoArrWithModel:(id)a0;
- (void)cancelAudioPlay;
- (void)updateFooterHeight;
- (BOOL)shouldSkipFetchWithKeyWord:(id)a0 animated:(BOOL)a1;
- (void)resetInset;
- (void)fetchSearchMusic;
- (void)scrollViewReloadData;
- (void)setupLoadmoreFooter;
- (void)trackPlayAllClickEvent:(id)a0;
- (void)openLunaPlayerWithSongId:(id)a0 trackParams:(id)a1;
- (void)stopLunaPlayer;
- (void)loadMoreMusicArrWithCompletion:(id /* block */)a0;
- (void)bottomPlayerWillShowWithHeight:(double)a0;
- (void)bottomPlayerWillDismissWithHeight:(double)a0;
- (void)listenMusicMode;
- (void)selectMusicMode;
- (void)isSelectedWithCompletion:(id /* block */)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
