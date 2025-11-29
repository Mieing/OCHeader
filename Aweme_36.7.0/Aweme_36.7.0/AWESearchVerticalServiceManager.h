@class NSString;

@interface AWESearchVerticalServiceManager : AWESearchBasicViewControllerServiceManager <AWESearchVeticalServiceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentPageScene;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2 isSearchByUserClick:(BOOL)a3 isFilterSearch:(BOOL)a4 animated:(BOOL)a5 completion:(id /* block */)a6;
- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customHandleNodeViewModelsReady:(id)a0 withResponseParams:(id)a1 isLoadmore:(BOOL)a2;
- (void)customComponentDidFinishRender:(id)a0 withViewModel:(id)a1;
- (void)handleRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customComponentWillDisplay:(id)a0 withViewModel:(id)a1;
- (void)newAISearchAPPLocationPopupShow;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_aiStreamFinishedReceiveDataWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybird_aiRequestFailureWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiCardRenderFirstWordWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiLoadingDidRemoveWithSearchID:(id)a0;
- (void)searchHybrid_aiSearchAICardWillReAnswerWithViewModel:(id)a0;
- (void)searchHybrid_aiReceiveInputBoxCopilotInfo:(id)a0;
- (void)searchHybird_setSearchHistoryComponent:(id)a0;
- (void)searchHybird_setupUI;
- (void)searchHybird_selectHistoryWithQuery:(id)a0;
- (void)searchHybird_transToDetailPageWithQuery:(id)a0 params:(id)a1;
- (void)searchHybrid_userStopAIProcess:(BOOL)a0;
- (void)searchHybird_willStartSSESearchWithQuery:(id)a0 card:(id)a1;
- (void)searchHybrid_willInsertMarkCard;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (void)searchHybrid_willLeaveSearchModeWithLeaveType:(id)a0;
- (id)searchHybrid_getSearchBottomFadeCardWithDefaultHeight:(BOOL)a0;
- (void)searchHybrid_willStartGeneralSearchWithQuery:(id)a0;
- (void)searchHybrid_generalSearchDidReceiveFirstResponseWithSearchID:(id)a0;
- (void)searchHybrid_historySideBarWillShow;
- (void)searchHybrid_conversationServiceWillScrollToConversation:(id)a0 searchID:(id)a1 timeStamp:(double)a2;
- (void)searchHybrid_conversationServiceWillRefreshWithConversation:(id)a0 searchID:(id)a1 timeStamp:(double)a2;
- (id)initWithServiceNameArray:(id)a0;
- (id)customContainer;
- (void)viewDidAppear;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
