@class NSArray, AWEIMDecisionDirector, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMStrategyConfigManager : NSObject

@property (copy, nonatomic) NSArray *matchedRecvTextMsgNodeArray;
@property (nonatomic) BOOL isFetchingSettings;
@property (retain, nonatomic) AWEIMDecisionDirector *resolveDirector;
@property (copy) NSArray *registeredBizTripleArray;
@property (retain, nonatomic) NSMutableArray *dependencyArray;
@property (readonly, nonatomic) BOOL splitSceneSettingEnable;
@property (copy, nonatomic) NSDictionary *bizKeyToSceneStrMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resolveConfigQueue;
@property (readonly, nonatomic) BOOL useReorderAdapt;
@property (copy, nonatomic) NSDictionary *diverterTags;
@property (copy) NSDictionary *reportToggles;
@property (readonly, nonatomic) BOOL fixServiceAcbDiff;

+ (id)sharedInstanceWithWakeupNetFlag:(id)a0;
+ (id)createBizTripleArray;
+ (void)p_parseAllConfigFromResponseDict:(id)a0 registeredBizTripleArray:(id)a1;
+ (id)p_parseBizModelClass:(Class)a0 fromJsonDict:(id)a1;
+ (id)convertModelDictToDict:(id)a0;
+ (id)sharedInstance;

- (id)resolvedConfigWithScene:(unsigned long long)a0 conversation:(id)a1 extraParams:(id)a2;
- (id)resolvedConfigWithScene:(unsigned long long)a0 extraParams:(id)a1;
- (id)fetchConfigWithScenes:(id)a0;
- (void)reloadConfigWithContext:(id)a0;
- (id)asyncResolvedConfigWithScene:(unsigned long long)a0 extraParams:(id)a1;
- (id)resolvedAllValidConfigsWithScene:(unsigned long long)a0 conversation:(id)a1 extraParams:(id)a2;
- (void)p_afterModelUpdate;
- (id)resolvedConfigWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 convContext:(id)a3 extraParams:(id)a4;
- (void)clearConversationData;
- (void)asyncResolvedMatchMsgConfigWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 convContext:(id)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (BOOL)canRefreshActionBarWithTextMessageContent:(id)a0 scene:(unsigned long long)a1 diffSceneType:(unsigned long long)a2 conversation:(id)a3 extraParams:(id)a4;
- (BOOL)canRefreshActionBarWithOtherMessageScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 extraParams:(id)a3;
- (BOOL)canRefreshActionBarWithRecentMessageScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 extraParams:(id)a3;
- (id)transferStringWithStrategyConfigScene:(unsigned long long)a0;
- (void)trackServerObservabilityWithScene:(unsigned long long)a0 baseConfig:(id)a1 diffConfig:(id)a2 diffUUid:(id)a3;
- (void)addStrategyConfigActionDependency:(id)a0;
- (void)registeDependency;
- (id)initWithNetFlag:(id)a0;
- (void)configResolveDirector;
- (void)registerBizForStrategyConfigPlatfom;
- (BOOL)fetchConfig:(id)a0 withContext:(id)a1;
- (id)runFeedReadyTaskIfNeed;
- (BOOL)p_fetchConfig:(id)a0 withContext:(id)a1;
- (id)transferRequestStringWithScenesArray:(id)a0;
- (void)p_trackNetworkPerformanceWithRequestCost:(long long)a0 parseCost:(long long)a1 requestError:(id)a2 responseDict:(id)a3;
- (id)p_asyncParseAllConfigFromResponseDict:(id)a0;
- (id)parseCommonDecisionDictWithConversation:(id)a0 bizParams:(id)a1;
- (id)p_resolvedConfigWithScene:(unsigned long long)a0 decisionContext:(id)a1 dataParseCost:(double)a2;
- (id)p_getConfigDataWithSceneString:(id)a0 configName:(id)a1;
- (id)resolveConfigWithContext:(id)a0;
- (id)makeRecvTextMsgNodeArrayWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 context:(id)a3;
- (BOOL)canRefreshOtherMsgNodeArrayWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 context:(id)a3;
- (BOOL)canRefreshRecentMsgNodeArrayWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 context:(id)a3;
- (void)p_applyConfigDiffIfNeeded:(id)a0 diffSceneType:(unsigned long long)a1 result:(id)a2 treeConfigDict:(id)a3 conversation:(id)a4;
- (void)p_replaceCustomizeConfigIfNeed:(id)a0 diffSceneType:(unsigned long long)a1 convContext:(id)a2 result:(id)a3 treeConfigDict:(id)a4;
- (void)p_trackPerformanceWithScene:(id)a0 preCost:(double)a1 decisionCost:(double)a2 dataFetchCost:(double)a3 success:(BOOL)a4 errReason:(id)a5;
- (void)applyHintInfoDiffWithDiff:(id)a0 origin:(id)a1;
- (void)p_applyHitShowInfosDiffOpt:(id)a0 diffButtonConf:(id)a1;
- (void)p_applyHitShowInfoDiffModify:(id)a0 originShowInfos:(id)a1;
- (void)p_applyHitShowInfosDiff:(id)a0 diffButtonConf:(id)a1;
- (void)p_applyButtonConfigDiffModify:(id)a0 diffButtonConf:(id)a1;
- (void)p_applySortGroupDiff:(id)a0 diffConfig:(id)a1;
- (void)p_applyButtonConfsDiff:(id)a0 diffConfig:(id)a1 context:(id)a2;
- (void)asyncResolvedMatchMsgConfigWithScene:(unsigned long long)a0 diffSceneType:(unsigned long long)a1 conversation:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)reachabilityDidChange:(id)a0;
- (void)clearConfig;

@end
