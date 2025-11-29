@class NSString, BDPQueue;

@interface BDPPluginVideoStrategyImpl : NSObject <BDPVideoStrategyDelegate>

@property (nonatomic) BOOL showDebugConsole;
@property (retain, nonatomic) BDPQueue *detectFrequencyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)srConfig;
- (BOOL)enableSuperResolution:(BOOL)a0;
- (id)filterConfig;
- (id)priorityConfig;
- (id)autoAdaptedBitrate:(id)a0 strategyModel:(id)a1 uniqueID:(id)a2;
- (id)blankDetectConfig;
- (void)videoBlankDetect:(id)a0 uniqueID:(id)a1 extra:(id)a2;
- (id)autoAdaptedBitrate:(id)a0 definitionModel:(id)a1 strategyModel:(id)a2 uniqueID:(id)a3;
- (id)defaultInitialPlayDefinitionItem:(id)a0;
- (id)legalPredictBitrateList:(id)a0;
- (id)filtedPredictBitrateList:(id)a0 uniqueID:(id)a1;
- (id)findCurveConfigWithUniqueID:(id)a0;
- (double)calculateTargetBitrateEqutionWithA:(double)a0 b:(double)a1 c:(double)a2 d:(double)a3 speed:(double)a4;
- (id)checkSRDeviceConditions:(id)a0 uniqueID:(id)a1;
- (BOOL)checkConditionsValid:(id)a0 uniqueID:(id)a1;
- (BOOL)checkConditionValid:(id)a0 value:(id)a1 input:(id)a2;
- (id)curveConfigs;
- (id)getPriorityCurveConfig:(id)a0;
- (long long)getCurveItemPriority:(id)a0;
- (id)autoAdaptedBitrate:(id)a0 uniqueID:(id)a1;
- (void)setDebugConsole:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
