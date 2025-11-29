@class NSString, NSDictionary, AWEPlayletTracker, NSObject, NSMutableArray;
@protocol OS_dispatch_group, AWEHttpTask;

@interface AWEPlayletCardDataController : AWEPlayletFeedDataController <AWELongVideoTCFeedCardDataControllerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL alreadyUpdateInsertData;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (copy, nonatomic) NSDictionary *skylightTabParams;
@property (nonatomic) BOOL isLoadRecommendWithNoMoreData;
@property (retain, nonatomic) id<AWEHttpTask> feedCardTask;
@property (retain, nonatomic) NSMutableArray *cacheModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadAwemeDataWithParams:(id)a0 Completion:(id /* block */)a1;
+ (void)preloadTabWindowDataCompletion:(id /* block */)a0;
+ (void)preloadAwemeDataWithCompletion:(id /* block */)a0;
+ (long long)fetchCount;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)cacheAwemeModelWindowData:(id)a0;
- (void)requestTabWindowData:(long long)a0;
- (void)dealFeedDataWithPullType:(long long)a0 response:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)requestFeedDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)lynxViewDidFinishLoad;
- (id)feedConfigRequestParamsWithParamsDict:(id)a0 pullType:(long long)a1;
- (void)requestCardFeedAwemeModelListWithCardList:(id)a0;
- (id)feedConfigRequestParamsWithParamsDict:(id)a0;
- (void)refreshFeedDataForTabClickParams:(id)a0 completion:(id /* block */)a1;
- (void)loadRecommendWithNoMoreDataCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTracker:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
