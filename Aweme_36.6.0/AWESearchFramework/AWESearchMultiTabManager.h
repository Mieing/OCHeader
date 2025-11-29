@class AWESearchResultVerticalBaseViewController;
@protocol AWESearchMultiTabManagerImplProtocol;

@interface AWESearchMultiTabManager : NSObject

@property (retain, nonatomic) id<AWESearchMultiTabManagerImplProtocol> managerImpl;
@property (nonatomic) BOOL immersiveContainerViewHiddenByCard;
@property (nonatomic) BOOL isTabChanging;
@property (nonatomic) BOOL isPullRefreshingState;
@property (weak, nonatomic) AWESearchResultVerticalBaseViewController *container;

- (void)setLogExtra:(id)a0;
- (id)logExtra;
- (void)setIsSticky:(BOOL)a0;
- (BOOL)isMultiTabScene;
- (void)prepareClear;
- (void)rollbackClear;
- (void)confirmClear;
- (void)willExcutePullRefresh;
- (BOOL)shouldCustomPullRefresh;
- (void)executePullRefreshWithCompletion:(id /* block */)a0;
- (BOOL)disableAppendGeneralViewModels;
- (void)appendAfterChangeToGeneralWithCompletion:(id /* block */)a0;
- (BOOL)hasDataForTab:(long long)a0;
- (void)loadDataForTab:(long long)a0 completion:(id /* block */)a1;
- (void)showDataForTab:(long long)a0 completion:(id /* block */)a1;
- (void)loadDataForTab:(long long)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)preloadDataForTab:(long long)a0 withExtraParam:(id)a1 completion:(id /* block */)a2;
- (void)setChangeTabBlock:(id /* block */)a0;
- (void)setPerformanceMonitor:(id)a0;
- (void)preloadDataForTab:(long long)a0 completion:(id /* block */)a1;
- (void)clearDataForTab:(long long)a0 completion:(id /* block */)a1;
- (long long)dataTypeForTab:(long long)a0;
- (void)addSkeletonForTab:(long long)a0;
- (void)removeSkeletonForTab:(long long)a0;
- (void)markNeedOverlayForTab:(long long)a0;
- (BOOL)initManagerImplWithClzIfNeeded:(Class)a0;
- (void).cxx_destruct;

@end
