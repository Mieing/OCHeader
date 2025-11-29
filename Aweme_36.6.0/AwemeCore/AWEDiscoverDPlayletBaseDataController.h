@class AWEDiscoverDPlayletBaseDataModel, AWEDiscoverDPlayletPerformanceEvent;

@interface AWEDiscoverDPlayletBaseDataController : AWEListDataController

@property (retain, nonatomic) AWEDiscoverDPlayletBaseDataModel *dataModel;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned long long dataControllerType;
@property (weak, nonatomic) AWEDiscoverDPlayletPerformanceEvent *performanceEvent;

+ (id)requestPlayletVideoList:(id)a0 cursor:(id)a1 count:(id)a2 pullDown:(BOOL)a3 disableInsertAd:(long long)a4 requestParams:(id)a5 completeBlock:(id /* block */)a6;

- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)initFromListDataController:(id)a0 withPlayletID:(id)a1;
- (void)firstFetchWithCompletion:(id /* block */)a0;
- (id)stageMonitorCommonParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)a0;

@end
