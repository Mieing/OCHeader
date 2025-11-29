@class NSArray, NSString, AWENearbyHotSpotTableViewController, NSMutableArray, AWENearbyHotSpotTableViewModel;
@protocol AWENearbyHotSpotFeedDataControllerDelegate, AWEHttpTask;

@interface AWENearbyHotSpotFeedDataController : AWEListDataController <AWENearbyHotSpotFeedDataControllerProtocol>

@property (readonly, nonatomic) unsigned long long sceneType;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) BOOL inOfflineLoop;
@property (nonatomic) BOOL restartToCursor0;
@property (copy, nonatomic) NSArray *totalDatasForLoop;
@property (nonatomic) BOOL isFromFastSwitchNextHotSpot;
@property (nonatomic) long long hotSpotTotalCount;
@property (copy, nonatomic) NSArray *hotSpotFirstAwemeList;
@property (copy, nonatomic) NSString *hotRankVersion;
@property (nonatomic) long long preCursor;
@property (weak, nonatomic) id<AWENearbyHotSpotFeedDataControllerDelegate> delegate;
@property (copy, nonatomic) NSString *extraParams;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long initialCursor;
@property (nonatomic) long long nextCursor;
@property (copy, nonatomic) NSString *initialAwemeID;
@property (weak, nonatomic) AWENearbyHotSpotTableViewModel *viewModel;
@property (weak, nonatomic) AWENearbyHotSpotTableViewController *viewController;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *filteredDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)preloadModel:(id)a0;
- (id)nextHotSpotFirstModel:(id)a0;
- (void)fetchWithCount:(long long)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)bottomViewDisableInteraction:(BOOL)a0;
- (id)baseParameters:(BOOL)a0;
- (void)lightUpdateAweme:(id)a0;
- (void)addProgressInfoWithModels:(id)a0;
- (void)didRequestCompleteWithPullType:(long long)a0 success:(BOOL)a1 models:(id)a2;
- (id)initWithSceneType:(unsigned long long)a0;
- (id)readyForFastSwitchNextHotSpot:(id)a0;
- (void).cxx_destruct;
- (void)startRequest;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)endRequest;

@end
