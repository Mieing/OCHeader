@class NSDictionary, NSError, NSMutableArray, ACCRecordViewControllerInputData;

@interface AWERouterAbilityManager : NSObject

@property (retain, nonatomic) NSMutableArray *abilityLists;
@property (retain, nonatomic) NSDictionary *routerParam;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (copy, nonatomic) id /* block */ completedHandler;
@property (retain, nonatomic) NSError *abilityError;
@property (nonatomic) unsigned long long abilityMaskOption;

- (void)clearTask;
- (id)abilityTrackData;
- (id)p_inputDataConfiguration;
- (void)p_allAbilityParamConfiguration;
- (void)p_allAbilityAssemblyCompletedIfNeed;
- (BOOL)p_allAbilityStatusCheckIfNeed;
- (void)p_cancelAllAbilityOperation;
- (void)prepareTaskWithInputData:(id)a0 routerParams:(id)a1;
- (id)createInputData;
- (id)createAbilityWithType:(long long)a0;
- (id)abilityParametersPromiseCheck;
- (void)buildingAbilityCompleted:(id /* block */)a0;
- (void).cxx_destruct;

@end
