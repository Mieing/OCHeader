@class AWEUGCTopicPublishProgressViewModule, NSString, AWEUGCTopicCommentEffectModule, AWEUGCTopicEntrancePublishHelper, AWESearchUGCTopicFilterManager, AWESearchUGCPageContext, AWEUGCTopicPublishEffectModule, NSMutableArray, AWEUGCTopicCommentModule;
@protocol AWESearchServiceManagerProtocol, AWEUGCTopicTrackerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWEUGCTopicService : NSObject <AWESearchDecoratorCommentDelegateProtocol, AWEUGCTopicServiceProtocol, AWESearchGeneralSearchServiceProtocol>

@property (copy, nonatomic) NSString *serviceUID;
@property (retain, nonatomic) AWEUGCTopicPublishEffectModule *effectModule;
@property (retain, nonatomic) AWEUGCTopicPublishProgressViewModule *progressViewModule;
@property (retain, nonatomic) AWEUGCTopicCommentModule *commentModule;
@property (retain, nonatomic) AWEUGCTopicCommentEffectModule *commentEffectModule;
@property (nonatomic) BOOL isViewPageDidAppeared;
@property (retain, nonatomic) NSMutableArray *postponedInsertModelArray;
@property (retain, nonatomic) NSMutableArray *moduleArray;
@property (nonatomic) BOOL isUsingService;
@property (retain, nonatomic) AWESearchUGCPageContext *currentPageContext;
@property (retain, nonatomic) id<AWEUGCTopicTrackerProtocol> tracker;
@property (retain, nonatomic) AWEUGCTopicEntrancePublishHelper *currentPublishHelper;
@property (nonatomic) BOOL isFilterButtonEnabled;
@property (retain, nonatomic) AWESearchUGCTopicFilterManager *filterManager;
@property (nonatomic) BOOL isDoubleColumnSwitchEnabled;
@property (nonatomic) long long doubleColumnMode;
@property (nonatomic) BOOL isDiscussPreFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;

+ (BOOL)enablePubishAbility:(id)a0;

- (void)configUI;
- (void)runOnMainThread:(id /* block */)a0;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)updateSortType:(long long)a0;
- (BOOL)getIsFilteredSearch;
- (id)getFilterParams;
- (void)didCommentSentSuccessfully:(id)a0;
- (void)startCommentWithCommentContext:(id)a0;
- (void)didFinishPublishWithContext:(id)a0;
- (void)beginPublishWithContext:(id)a0;
- (void)startPublishWithShotContext:(id)a0;
- (void)bindInnerFlowDecoratorFuncsForBusiness:(id)a0;
- (id)headerCardTypeAliasNames;
- (void)clearModule;
- (void)updateModule;
- (void)continueInsertCardForPublishOuterFlow;
- (id)getTopicPublishTrackParamsContext:(id)a0;
- (void)beginSearchDecoratorPublishWithTaskForOuterFlowImpl:(id)a0;
- (void)didFinishSearchTopicPublishWithTaskForOuterFlowImpl:(id)a0;
- (void)setIsDiscussPreFetched;
- (BOOL)getIsDiscussPreFetched;
- (BOOL)getIsFilterButtonEnabled;
- (void)chunkHandleReplaceResponse:(id)a0 allowShow:(BOOL)a1 rootModel:(id)a2 useCSP2:(BOOL)a3 chunkIndex:(long long)a4;
- (void)handleCachalotContext:(id)a0 withRouterModel:(id)a1 serviceProvider:(id)a2 extraParams:(id)a3;
- (void)removeService;
- (BOOL)getIsDoubleColumnSwitchEnabled;
- (long long)getCurrentSortType;
- (long long)getDoubleColumnMode;
- (void)updateDoubleColumnMode:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
