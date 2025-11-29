@class NSString;

@interface AWETeenHotListDataController : AWEListDataController <AWEUserMessage, AWEListDataRefreshByReusingLocalDataProtocol, AWETeenHomepageDataControllerProtocol>

@property (nonatomic) long long initFetchCount;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) long long feedCount;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *prevRequestItemIDs;
@property (nonatomic) long long pullType;
@property (copy, nonatomic) NSString *lastInterestChanelId;
@property (copy, nonatomic) NSString *stickToItemIds;
@property (copy, nonatomic) NSString *stickAfterAgeChangeItemIds;
@property (copy, nonatomic) NSString *interestChannelID;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isDefaultFeedsTimerInitialized;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL forceRefresh;
@property (nonatomic) BOOL isDoubleColumnRequest;
@property (nonatomic) long long maxReachedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)markLaunchFinished;
+ (id /* block */)_didGetDuplicatedArrayBlock:(long long)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)updateAwemeList:(id)a0;
- (void)trackWithModel:(id)a0 error:(id)a1;
- (BOOL)shouldRefreshWithUserState;
- (id)_loadmoreDataSourceWithArray:(id)a0 requestId:(id)a1;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 requestId:(id)a1 isEqual:(id /* block */)a2 didGetDuplicatedArray:(id /* block */)a3;
- (void)trackWhenDeleteDuplicatedItems:(id)a0 requestId:(id)a1;
- (id)_refreshDataSourceWithArray:(id)a0 cleanRefresh:(BOOL)a1 requestId:(id)a2;
- (id)refreshListWithUnconsumedVideos;
- (void)refreshByReusingLocalDataFromIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)p_shouldUseCache;
- (void)cancelCurrentTask;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (id)p_cacheHotList;
- (BOOL)teenUnconsumedReplaceEnable;
- (BOOL)shouldRefreshWithInterestChanelState;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
