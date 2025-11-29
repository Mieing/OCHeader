@class NSArray, NSString, AWEPlayletPageContext, AWEPlayletTracker, NSMutableArray, NSObject;
@protocol OS_dispatch_group, AWEPlayletFeedDataControllerDelegate;

@interface AWEPlayletFeedDataController : AWEListDataController

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL alreadyUpdateInsertData;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (retain, nonatomic) NSMutableArray *seriesPlayletAwemeList;
@property (retain, nonatomic) NSMutableArray *playletAwemeIdList;
@property (nonatomic) BOOL needRequestAwemeModel;
@property (nonatomic) long long firstEnterTabTodayTime;
@property (weak, nonatomic) id<AWEPlayletFeedDataControllerDelegate> delegate;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (copy, nonatomic) NSArray *guideAwemeIdList;
@property (copy, nonatomic) NSArray *forceAwemeIdList;
@property (nonatomic) BOOL isForceEncharge;
@property (nonatomic) BOOL isFromRevisitView;
@property (copy, nonatomic) NSString *revisitPlayletId;
@property (nonatomic) BOOL enableRequestSkyLight;

+ (void)preloadTabWindowDataCompletion:(id /* block */)a0;
+ (void)preloadAwemeDataWithCompletion:(id /* block */)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)cacheAwemeModelWindowData:(id)a0;
- (void)requestTabWindowData:(long long)a0;
- (void)dealFeedDataWithPullType:(long long)a0 response:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)requestFeedDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)lynxViewDidFinishLoad;
- (id)feedConfigRequestParamsWithParamsDict:(id)a0 pullType:(long long)a1;
- (id)feedConfigRequestParamsWithParamsDict:(id)a0;
- (void)initFetchWithPreloadDataFeedList:(id)a0 completion:(id /* block */)a1;
- (void)requestSkylightAwemeModelListIfNeed;
- (void)requestPopupDataWithParamsDict:(id)a0 completion:(id /* block */)a1;
- (void)requestDataWithWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)initFetchUseGroupWithCompletion:(id /* block */)a0;
- (void)initFetchUseGroupWithPreloadDataFeedList:(id)a0 skylightData:(id)a1 completion:(id /* block */)a2;
- (void)initFetchWithPreloadDataFeedList:(id)a0 skylightData:(id)a1 completion:(id /* block */)a2;
- (id)filterRevisitModelIfEnterFromCrossTabLabel:(id)a0;
- (void)requestTabWindowData:(long long)a0 completion:(id /* block */)a1;
- (void)requestSkylightSearchConfig:(long long)a0;
- (void)updateFirstEnterTabTodayTimeIntervalIfNeed;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTracker:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
