@class NSString, NSTimer, AWEAdSimilarRecommendResponseModel, AWEAwemeModel, NSNumber;

@interface AWESimilarRecommendDataManager : AWEListDataController <AWESimilarRecommendDataManagerProtocol>

@property (copy, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSTimer *requestDelayTimer;
@property (nonatomic) BOOL currentRequestCanceled;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL autoShow;
@property (nonatomic) BOOL willDestroy;
@property (nonatomic) BOOL canTrackFailed;
@property (nonatomic) long long requestDelayTime;
@property (nonatomic) double startRequestTime;
@property (retain, nonatomic) AWEAdSimilarRecommendResponseModel *similarRecommendResponseModel;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *similarRecommendExtra;
@property (retain, nonatomic) AWEAwemeModel *feedModel;
@property (nonatomic) long long similarRecommendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (BOOL)canShow;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithRefer:(id)a0 similarRecommendExtra:(id)a1;
- (void)trackShowFailedWithReason:(id)a0;
- (id)paramsIsRefresh:(BOOL)a0;
- (id)constructDataSourceWithResponseModel:(id)a0;
- (void)startTimerWithCompletion:(id /* block */)a0;
- (void)realRefreshWithCompletion:(id /* block */)a0;
- (void)loadMore:(id /* block */)a0;
- (BOOL)canLoadMore;
- (void).cxx_destruct;
- (void)removeAll;
- (id)requestURL;
- (void)invalidateTimer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;
- (void)cancelCurrentRequest;

@end
