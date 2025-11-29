@class NSString;

@interface AWESearchResultHybridServiceManager : AWESearchVerticalServiceManager <AWESearchResultHybridServiceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPageScene;
- (void)setupUI:(id)a0;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)customFeedDidScroll:(id)a0;
- (void)searchTopLoadingViewWithTipString:(id)a0 searchID:(id)a1;
- (void)searchTopLoadingViewClickEnabledWithSchema:(id)a0 searchID:(id)a1;
- (void)searchAutoOpenDeepThink:(BOOL)a0 searchID:(id)a1;
- (void)notiInputControllerCostAniEvent:(BOOL)a0;
- (BOOL)fetchDeepThinkIsOpen;
- (void)aiStartRequestQuery:(id)a0;
- (void)aiReceiveFirstDataWithSearchID:(id)a0 searchKeyword:(id)a1;
- (void)aiReceiveDataFinishWithSearchID:(id)a0;
- (void)startSearch:(id)a0;
- (void)handleSearchKeywordDidChangedNotification:(id)a0;
- (void)bindConversationID:(id)a0 andSearchID:(id)a1;
- (id)fetchSearchBarController;
- (void)themeDIdChange;
- (id)fetchNaviBar;
- (void)aiSearchWillStart:(id)a0;
- (void)searchBarControllerStopEvent;
- (id)fetchCurrentSearchQueryContext;
- (void)bindAIGCService:(id)a0;
- (void)customOnBackButtonClicked;
- (void)dispatchRouterModel:(id)a0;
- (void)historyBarPageDidChange:(BOOL)a0;
- (void)callModules:(SEL)a0 complete:(id /* block */)a1;

@end
