@class NSString;
@protocol AWESearchAIGCServiceProtocol, AWESearchResultHybridViewControllerProtocol, AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchResultHybridBaseContainerModules : AWESearchBaseContainerService <AWESearchResultHybridModulesProtocol>

@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchResultHybridViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUI:(id)a0;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)handleRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)customFeedDidScroll:(id)a0;
- (void)searchTopLoadingViewWithTipString:(id)a0 searchID:(id)a1;
- (void)searchTopLoadingViewClickEnabledWithSchema:(id)a0 searchID:(id)a1;
- (void)searchAutoOpenDeepThink:(BOOL)a0 searchID:(id)a1;
- (void)notiInputControllerCostAniEvent:(BOOL)a0;
- (void)aiStartRequestQuery:(id)a0;
- (void)aiReceiveFirstDataWithSearchID:(id)a0 searchKeyword:(id)a1;
- (void)aiReceiveDataFinishWithSearchID:(id)a0;
- (void)handleSearchKeywordDidChangedNotification:(id)a0;
- (void)themeDIdChange;
- (void)aiSearchWillStart:(id)a0;
- (id)get_enterFrom;
- (void)searchBarControllerStopEvent;
- (void)bindAIGCService:(id)a0;
- (void)customOnBackButtonClicked;
- (void)dispatchRouterModel:(id)a0;
- (void)historyBarPageDidChange:(BOOL)a0;
- (void).cxx_destruct;

@end
