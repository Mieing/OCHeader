@class NSString, AWESearchHybridSceneFadeCardModel;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybridSearchFadeCardModule : AWESearchBaseContainerService <AWESearchVerticalServiceProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> fadeCard;
@property (retain, nonatomic) AWESearchHybridSceneFadeCardModel *fadeModel;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> listenAICardModel;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> preFadeCard;
@property (nonatomic) double currentMarkCardHeight;
@property (nonatomic) double loadingCardHeight;
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
+ (void)logAlog:(id)a0;
+ (BOOL)isFadeCard:(id)a0;
+ (id)moduleName;

- (void)searchHybird_aiStreamFinishedReceiveDataWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybird_aiRequestFailureWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiCardRenderFirstWordWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybrid_aiLoadingDidRemoveWithSearchID:(id)a0;
- (void)searchHybrid_aiSearchAICardWillReAnswerWithViewModel:(id)a0;
- (void)searchHybrid_userStopAIProcess:(BOOL)a0;
- (void)searchHybird_willStartSSESearchWithQuery:(id)a0 card:(id)a1;
- (void)searchHybrid_willInsertMarkCard;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (id)searchHybrid_getSearchBottomFadeCardWithDefaultHeight:(BOOL)a0;
- (void)searchHybrid_willStartGeneralSearchWithQuery:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)updateCardHeight:(id)a0;
- (void)observerAICardShowHeight:(id)a0;
- (void)stopObserver;
- (BOOL)calculateAndUpdateCardHeight:(long long)a0;
- (id)currentServiceManager;
- (void)removeSearchBottomFadeCard:(id)a0;
- (void)updateCurrentFadeHeightWithMarkCardHeight:(id)a0;
- (id)getSearchBottomFadeCardWithDefaultHeight:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
