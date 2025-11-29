@class NSArray, NSString, NSMutableDictionary, AWEAwemeModel, NSDictionary, AWEOriginalAdModel;
@protocol AWEECFeedListDelegate, AWEHttpTask;

@interface AWENearbyInnerListDataController : AWEListDataController <AWECacheDataControllerProtocol, AWEECFeedListProtocol>

@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSArray *outAwemeList;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) BOOL currentLoadMoreIsCache;
@property (retain, nonatomic) NSString *outAwemeIDs;
@property (nonatomic) long long loadBrush;
@property (retain, nonatomic) NSMutableDictionary *filteredToRaw;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *innerPath;
@property (nonatomic) BOOL waitingFirstItem;
@property (retain, nonatomic) AWEAwemeModel *preLoadModel;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL removeDataAfterRequestCallback;
@property (nonatomic) BOOL isMallPlayer;
@property (retain, nonatomic) NSString *mallEnterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isFromLifeMallFeeds;
@property (copy, nonatomic) NSString *lifeMallFeedsSessionId;
@property (copy, nonatomic) NSString *lifeMallFeedsScene;
@property (copy, nonatomic) NSDictionary *lifeMallFeedsLogExtraParams;
@property (copy, nonatomic) NSDictionary *adRequestParams;
@property (retain, nonatomic) AWEOriginalAdModel *originAdInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEECFeedListDelegate> feedListDelegate;

+ (void)p_insertDebugParamsInDictionary:(id)a0;
+ (void)p_mutateDebugAwemeResponse:(id)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (id)currentCityCode;
- (id)needRemoveUnusedCacheList;
- (BOOL)loadMoreIsCache;
- (id)_filterDuplicatedDatasourceWithSource:(id)a0 array:(id)a1;
- (void)updateAllModelIndex;
- (void)p_calculateFilteredWithSource:(id)a0 filteded:(id *)a1 row:(id *)a2 raw:(id *)a3;
- (void)updateDataWithPullType:(long long)a0 resp:(id)a1 filteredDiff:(id *)a2;
- (id)initWithSource:(unsigned long long)a0 outAwemeList:(id)a1 pageType:(long long)a2 extraParams:(id)a3;
- (void)requestMallFirstAwemeWithType:(long long)a0 paramDict:(id)a1 completion:(id /* block */)a2;
- (void)requestWithType:(long long)a0 paramDict:(id)a1 completion:(id /* block */)a2;
- (id)enterFromParams;
- (void)handleNearbyCardListWithPullType:(long long)a0 response:(id)a1;
- (id)networkTrackParamsFromResponse:(id)a0;
- (id)getServerTiming:(id)a0 param:(id)a1;
- (id)initWithSource:(unsigned long long)a0 awemeIDs:(id)a1 pageType:(long long)a2;
- (id)initWithSource:(unsigned long long)a0 outAwemeList:(id)a1 pageType:(long long)a2 innerPath:(id)a3 extraParams:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)cancelCurrentRequest;

@end
