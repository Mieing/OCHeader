@class NSSet, NSDictionary;

@interface BDPPreloadStrategyResolver : NSObject

@property (copy, nonatomic) NSSet *validConditions;
@property (copy, nonatomic) NSSet *validOperators;
@property (copy, nonatomic) NSDictionary *operatorAndValueCountsMap;
@property (copy, nonatomic) NSDictionary *conditionSupportOpMap;

- (id)resolveRules:(id)a0 andModel:(id)a1 andContext:(id)a2 isPositiveRules:(BOOL)a3;
- (BOOL)p_checkConditions:(id)a0 andModel:(id)a1 andContext:(id)a2;
- (BOOL)p_isInvalidConditionName:(id)a0;
- (BOOL)p_isInvalidOperatorAndValues:(id)a0 forConditionName:(id)a1;
- (BOOL)p_checkConditionWithName:(id)a0 operatorAndValues:(id)a1 andModel:(id)a2 andContext:(id)a3;
- (BOOL)p_hitSystemMemoryUsageWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitAppMemoryUsageWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitMemoryLevelWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitHighActiveInferWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitLowPowerWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitLowEndDeviceWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitDeviceScoreWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitDeviceModelsWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitOSVersionWithOp:(id)a0 configValues:(id)a1 withContext:(id)a2;
- (BOOL)p_hitSceneWithOp:(id)a0 configValues:(id)a1 andSchema:(id)a2;
- (BOOL)p_hitAppIDWithOp:(id)a0 configValues:(id)a1 andAppID:(id)a2;
- (BOOL)p_hitIndexWithOp:(id)a0 configValues:(id)a1 andIndex:(id)a2;
- (BOOL)p_hitLastUsedNDaysAgoMpWithOp:(id)a0 configValues:(id)a1 andDays:(id)a2;
- (BOOL)p_hitLastUsedNDaysAgoHostWithOp:(id)a0 configValues:(id)a1 andDays:(id)a2;
- (BOOL)p_hitCallerWithOp:(id)a0 configValues:(id)a1 andCaller:(id)a2;
- (BOOL)p_checkConditionWithOperator:(id)a0 contextValue:(id)a1 andConfigValues:(id)a2;
- (BOOL)compareWithOp:(id)a0 ContextValue:(double)a1 configValue:(double)a2;
- (BOOL)checkInclusion:(id)a0 configValues:(id)a1;
- (BOOL)checkBetween:(id)a0 configValues:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
