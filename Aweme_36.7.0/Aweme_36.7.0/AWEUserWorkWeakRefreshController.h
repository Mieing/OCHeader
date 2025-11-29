@class AWEUserWorkCellViewModelPool, NSDictionary, UICollectionView, NSString, NSMutableArray;
@protocol AWEHttpTask;

@interface AWEUserWorkWeakRefreshController : AWEUserWorkController <AWEUserWorkWeakRefreshProtocol>

@property (weak, nonatomic) id<AWEHttpTask> weakRefreshTask;
@property (retain, nonatomic) NSDictionary *weakRefreshConfig;
@property (copy, nonatomic) id /* block */ diggCountHasDiffBlock;
@property (weak, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSMutableArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)dataTypeFromRefreshItemObject:(id)a0;
+ (id)itemIDFromRefreshItemObject:(id)a0;
+ (unsigned long long)postTypeFromRefreshItemObject:(id)a0;

- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)weakRefreshWithCompletion:(id /* block */)a0;
- (void)weakRefreshDataWithObject:(id)a0;
- (void)cancelWeakRefresh;
- (id)weakRequestURL;
- (BOOL)isWeakRefreshRunning;
- (void)handleWeakRefreshAwemeNotification:(id)a0;
- (long long)refreshAwemeCount;
- (long long)refreshReachCount;
- (id)refreshItemObject:(unsigned long long)a0 postType:(unsigned long long)a1 itemID:(id)a2;
- (void)mergerDataFrom:(id)a0 toModel:(id)a1 object:(id)a2;
- (void)weakRefreshWithRefreshModelBlock:(id /* block */)a0 refreshCompletion:(id /* block */)a1 extRefreshParams:(id)a2 refreshItemArray:(id)a3;
- (void)checkUserSyncWithUID:(id)a0 secUID:(id)a1;
- (void)markReachModuleWithExtModel:(id)a0 postReachModel:(id)a1;
- (unsigned long long)mergerDataNormalFrom:(id)a0 toModel:(id)a1;
- (void)mergerDataReachFrom:(id)a0 toModel:(id)a1;
- (void)mergerDataNoticeFrom:(id)a0 toModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
