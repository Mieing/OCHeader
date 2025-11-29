@class UIViewController, AWESearchResultMarkModel, AWESearchHomeNewStyleSearchBarQueryContext;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchResultHybridAIStreamModule : AWESearchResultHybridBaseContainerModules

@property (nonatomic) BOOL isAppearing;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> queryVM;
@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarQueryContext *queryContent;
@property (retain, nonatomic) AWESearchResultMarkModel *queryModel;
@property (weak, nonatomic) UIViewController *viewController;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (id)buildRequestParamsWithQuery:(id)a0 enterFrom:(id)a1;
+ (id)moduleName;

- (void)setupUI:(id)a0;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_aiRequestFailureWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiSearchAICardWillReAnswerWithViewModel:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void)customFeedWillBeginDragging:(id)a0;
- (void)searchTopLoadingViewWithTipString:(id)a0 searchID:(id)a1;
- (void)searchTopLoadingViewClickEnabledWithSchema:(id)a0 searchID:(id)a1;
- (void)deleteQueryNodeCopilot;
- (void)aiStartRequestQuery:(id)a0;
- (void)aiReceiveDataFinishWithSearchID:(id)a0;
- (void)addTitleCard:(id)a0 complete:(id /* block */)a1;
- (void)handleSearchKeywordDidChangedNotification:(id)a0;
- (void)searchWithInspirationParam:(id)a0;
- (void)p_endCopilotLoading;
- (void)handleSearchKeywordDidChanged:(id)a0;
- (void)p_updateCopilotWithViewModel:(id)a0;
- (void)transactionUpdateViewModel:(id)a0 completion:(id /* block */)a1;
- (void)saveSearchWord:(id)a0 wordType:(id)a1 queryContext:(id)a2;
- (void)removeCurrentSSETitleCard:(id /* block */)a0;
- (void)scrollToTop:(id)a0 animate:(BOOL)a1 navBarOffset:(double)a2 completion:(id /* block */)a3;
- (void)p_updateCopilotWithTipString:(id)a0;
- (void)p_updateCopilotWithIsClickEnabled:(BOOL)a0 schema:(id)a1;
- (void)p_restoreCopilotOriginalState;
- (id)resultPageServiceManager;
- (void)preBuildCard:(id)a0;
- (id)buildQueryCard:(BOOL)a0;
- (void)handleRemoteHistoryDataAfterKeepAliveData;
- (void)realSearch:(id)a0 anchor:(id)a1;
- (void)p_deleteCopilot;
- (BOOL)enableResultScrollToTopAnimationFix;
- (void)startAIStreamSearch:(id)a0;
- (void)searchBarControllerStopEvent;
- (id)fetchCurrentSearchQueryContext;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
