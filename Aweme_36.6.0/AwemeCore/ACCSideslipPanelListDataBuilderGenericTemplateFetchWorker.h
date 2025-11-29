@class NSArray, NSMutableDictionary, NSTimer, ACCSideslipPanelMaterialsComprehensionRequestState, ACCGenericTemplateListFetcher;
@protocol ACCSideslipPropService, ACCEditEffectPanelServiceProtocol;

@interface ACCSideslipPanelListDataBuilderGenericTemplateFetchWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (nonatomic) BOOL isDataFromCache;
@property (copy, nonatomic) id /* block */ composeDataCompletion;
@property (copy, nonatomic) NSArray *genericTemplateArray;
@property (retain, nonatomic) NSMutableDictionary *propPickDic;
@property (retain, nonatomic) NSTimer *defaultFetchTimer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericPanelService;
@property (retain, nonatomic) ACCGenericTemplateListFetcher *listFetcher;
@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) ACCSideslipPanelMaterialsComprehensionRequestState *materialsComprehensionRequestState;
@property (copy, nonatomic) id /* block */ getDefaultIsRecommendBlock;

- (id)filterWithCellModel:(id)a0;
- (long long)firstFetchEffectShowCount;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void)fetchDefaultListTimeOut;
- (void)readCacheAndShowBackupEffects;
- (void)cleanCacheEffectsIfNeeded;
- (void)composeDataWithError:(id)a0;
- (void)buildCellModels;
- (void)writeCacheWithTemplatesIfNeeded;
- (id)p_sortUsingIsDownloadedWithEffects:(id)a0;
- (void)writeCacheWithTemplates;
- (BOOL)shouldWaitForGenericTemplateMaterialRequest;
- (long long)maxPlaceholderCountForNeedUpdate;
- (void).cxx_destruct;
- (void)binding;

@end
