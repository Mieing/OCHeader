@class NSNumber, NSMutableArray, NSString;

@interface AWEWatchVideoLaterDataController : AWEListDataController <AWEBBarPanelDataControllerProtocol, AFDPureModePageMutiModelSourceProtocol>

@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSMutableArray *invalidItemIDs;
@property (copy, nonatomic) NSString *dataSourceObserverID;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSNumber *listNum;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long hasWatchedFirstIndex;
@property (nonatomic) long long emptyViewPreRequestCount;
@property (nonatomic) long long listFilterType;
@property (nonatomic) BOOL enableFilterType;
@property (readonly, nonatomic) BOOL refreshHasPrevious;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (id)pureModeMaxCursor;
- (BOOL)pureModeHasMore;
- (id)pureModeOriginModelList;
- (id)initWithEntranceObject:(id)a0;
- (void)forceUpdateLoadable;
- (id)JSONStringWithFilterType:(long long)a0;
- (void)trackRequest:(BOOL)a0 hasMore:(BOOL)a1 isFirstLoad:(BOOL)a2 msg:(id)a3 logId:(id)a4;
- (void)configWitgParams:(id)a0;
- (void)loadPreviousWithParams:(id)a0 andCompletion:(id /* block */)a1;
- (void)loadMoreWithParams:(id)a0 andCompletion:(id /* block */)a1;
- (void)requestDataCountWithFilterType:(long long)a0 completion:(id /* block */)a1;
- (long long)loadNextDataThreshold;
- (void).cxx_destruct;
- (id)requestURL;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;
- (long long)filterWithType:(long long)a0;

@end
