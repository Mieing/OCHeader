@class NSString, MMKV, NSNumber;

@interface AWEPadFeedChannelDataController : AWEListDataController

@property (nonatomic) long long initFetchCount;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (copy, nonatomic) NSString *requestPath;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSNumber *age;
@property (copy, nonatomic) id /* block */ loadMoreCompletion;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (copy, nonatomic) id /* block */ monitorBlock;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)transferAwemeModelForLive:(id)a0;
- (id)initWithRequestPath:(id)a0;
- (id)initWithRequestPath:(id)a0 fetchCount:(long long)a1;
- (void)_requestAwemeItemWithCount:(id)a0 minCursor:(id)a1 maxCursor:(id)a2 pullType:(long long)a3 extParams:(id)a4 monitor:(id)a5 completion:(id /* block */)a6;
- (void)_requestAwemeItemWithParams:(id)a0 monitor:(id)a1 completion:(id /* block */)a2;
- (void)_requestAwemeItemsWithURLString:(id)a0 params:(id)a1 timeout:(double)a2 usePbForRecommendFeed:(BOOL)a3 monitor:(id)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
