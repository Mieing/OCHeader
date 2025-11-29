@class AWESearchHybridSearchTipsView, NSString, AWESearchHomePageHybridViewController;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybridSearchTipsModule : AWESearchBaseContainerService <AWESearchVerticalServiceProtocol>

@property (retain, nonatomic) AWESearchHybridSearchTipsView *tipsView;
@property (copy, nonatomic) NSString *generatingSearchID;
@property (copy, nonatomic) NSString *latestSearchID;
@property (nonatomic) BOOL keyboardVisible;
@property (nonatomic) long long viewStatus;
@property (nonatomic) BOOL hasTriggeredScrollPastQueryRelatedFeeds;
@property (weak, nonatomic) AWESearchHomePageHybridViewController *homepageVC;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)moduleName;

- (void)feedDidScroll:(id)a0;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_aiStreamFinishedReceiveDataWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybird_aiRequestFailureWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiSearchAICardWillReAnswerWithViewModel:(id)a0;
- (void)searchHybird_setupUI;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)tipsClick;
- (id)tipsContainer;
- (BOOL)enableSearchRecommendIntegrationV2;
- (void)searchHome_willSetViewStatus:(long long)a0;
- (void)searchHome_willStartSearch:(id)a0;
- (id)homePageServiceManager;
- (id)upperTipsTargetVM;
- (id)queryFromVM:(id)a0;
- (id)searchIDFromVM:(id)a0;
- (id)upperTipsBindCard:(id)a0;
- (double)customScrollToTopTopMargin;
- (void)p_tipsViewReset;
- (void)updateTipsUIV2;
- (void)searchRecommendIntegrationV2HideTips;
- (void)updateTipsUI;
- (BOOL)isInLatestQueryResultRegion;
- (id)latestQueryComponent;
- (BOOL)p_getIsAwemeModelFeedDualIndividuation:(id)a0;
- (void)firstIndividuationDCFeedAppeared;
- (void)trackTipsClick;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;

@end
