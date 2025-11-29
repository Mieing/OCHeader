@class IESLiveComponentStageDynamicFilter, IESLiveComponentStrategyResult, IESLiveComponentStrategyProvider, IESLiveModuleOrderProvider, IESLiveComponentOrderProvider, NSMutableDictionary, NSDictionary, IESLiveComponentStrategyEntity, IESLiveComponentStrategyCenter, IESLiveComponentSyncManager, NSString, IESLiveComponentContext;
@protocol IESLiveBootableModel;

@interface IESLiveComponentLoadStrategyProcessor : NSObject <IESLiveComponentLoadStrategyProtocol>

@property (retain, nonatomic) IESLiveComponentStrategyProvider *strategyProvider;
@property (retain, nonatomic) IESLiveComponentOrderProvider *orderProvider;
@property (retain, nonatomic) IESLiveModuleOrderProvider *moduleOrderProvider;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL configEnable;
@property (retain, nonatomic) NSMutableDictionary *levelInfoPool;
@property (retain, nonatomic) NSMutableDictionary *levelCaches;
@property (retain, nonatomic) NSDictionary *customStrategyConfig;
@property (retain, nonatomic) id<IESLiveBootableModel> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (copy, nonatomic) id /* block */ getStrategyInfoCallback;
@property (retain, nonatomic) IESLiveComponentStrategyResult *strategyResult;
@property (retain, nonatomic) IESLiveComponentStrategyEntity *strategyEntity;
@property (retain, nonatomic) IESLiveComponentSyncManager *syncManager;
@property (retain, nonatomic) IESLiveComponentStageDynamicFilter *dynamicFilter;
@property (retain, nonatomic) IESLiveComponentStrategyCenter *strategyCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)highConsumptionStrategy;
- (BOOL)loadRankLiveViewWithNoDelay;
- (BOOL)toolBarSyncEnable;
- (BOOL)loadEnable;
- (BOOL)splitP0FixedComponentCreateAndLoad;
- (void)sortOrderLevelBeforeCreate:(long long)a0 components:(id)a1;
- (void)sortOrderLevel:(long long)a0 components:(id)a1;
- (BOOL)inBasicForName:(id)a0;
- (BOOL)inImportantForName:(id)a0;
- (BOOL)inNormalForName:(id)a0;
- (BOOL)inDowngragadableForName:(id)a0;
- (id)levelWithComponent:(id)a0;
- (id)updateModuleOrderWithKey:(id)a0 moduleList:(id)a1;
- (BOOL)blockWithComponent:(id)a0 sceneKey:(id)a1;
- (BOOL)blockStrategyWithComponent:(id)a0;
- (void)startLoadComponentStrategy;
- (void)recordFinishedWithLevel:(long long)a0;
- (BOOL)canLoadCurrentWithLevel:(long long)a0;
- (void)startLoadComponentCustomStrategyConfig:(id)a0;
- (void)strategyDetailWithResult:(long long)a0;
- (void)setUpDetailStrategy;
- (void)buildLevelInfo;
- (id)levelNewWithComponent:(id)a0;
- (void)cacheComponent:(id)a0 level:(id)a1;
- (id)levelInDynamicPriority:(id)a0;
- (id)createLevelInfoWithLevel:(long long)a0 previousInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
