@class AWEVideoUniformEffectDataManager, NSArray, IESEffectModel;

@interface ACCSideslipPanelListDataBuilderPropInsertsFollowDataWorker : ACCSideslipPanelListDataBuilderBaseInsertsWorker

@property (retain, nonatomic) AWEVideoUniformEffectDataManager *effectDataManager;
@property (copy, nonatomic) NSArray *toBeInsertedPropIDs;
@property (retain, nonatomic) IESEffectModel *unavailableProp;
@property (copy, nonatomic) NSArray *toBeInsertedPropModels;
@property (copy, nonatomic) NSArray *bringInEffects;
@property (copy, nonatomic) NSArray *bringInTemplates;

- (BOOL)disableAIGCEffect:(id)a0;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (id)toBeInsertedIDs;
- (void)initFollowShootInsertPropsIfNeeded;
- (void)initInsertPropsIfNeeded;
- (void)updateBringInEffects:(id)a0;
- (void)insertAIGCUGCTransitionEffectIfNeededWithPropPickDic:(id)a0;
- (BOOL)checkPropUnavailable:(id)a0;
- (void).cxx_destruct;

@end
