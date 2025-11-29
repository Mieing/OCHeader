@class NSNumber, AWEAwemeModel;

@interface AWEPlayletRecommendDataController : AWEDiscoverDPlayletBaseDataController

@property (nonatomic) BOOL isPreloadRequestFinish;
@property (nonatomic) BOOL needInitFetchRequestFinish;
@property (nonatomic) BOOL initFetchRequestFinished;
@property (nonatomic) BOOL hadFetched;
@property (nonatomic) BOOL isCalculatedInitial;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEAwemeModel *preAwemeModel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)initFromListDataController:(id)a0 withPlayletID:(id)a1;
- (id)initWithDataModel:(id)a0 preAwemeModel:(id)a1;
- (id)initWithDataModel:(id)a0 dataController:(id)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
