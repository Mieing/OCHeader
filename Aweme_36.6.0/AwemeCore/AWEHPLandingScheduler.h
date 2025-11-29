@class NSMutableArray, AWEHPLandingStrategyRegisterList;

@interface AWEHPLandingScheduler : NSObject

@property (retain, nonatomic) NSMutableArray *effectStrategies;
@property (retain, nonatomic) AWEHPLandingStrategyRegisterList *registerList;

+ (id)sharedInstance;

- (void)scheduleColdLandingCompletion:(id /* block */)a0;
- (void)p_scheduleStrategyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)p_trackLandingResultWithStatus:(long long)a0 error:(id)a1 result:(id)a2 extra:(id)a3;
- (void)p_loopExecuteLandingWithContext:(id)a0 resultModel:(id)a1 configMap:(id)a2 registerMap:(id)a3 completion:(id /* block */)a4;
- (BOOL)p_checkStrategyModel:(id)a0 registerModel:(id)a1 configData:(id)a2 context:(id)a3 landingResult:(id)a4;
- (BOOL)p_tryExecuteLandingWithContext:(id)a0 resultModel:(id)a1 strategyModel:(id)a2 registerModel:(id)a3 completion:(id /* block */)a4;
- (id)p_generateStrategyAbilityImplWithContext:(id)a0;
- (void)p_beginLandingWithStrategy:(id)a0;
- (void)p_endLandingWithStrategy:(id)a0 resultModel:(id)a1 strategyModel:(id)a2 succeed:(BOOL)a3;
- (void)p_executeLandingWithStrategy:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)p_executeTabLandingWithStrategy:(id)a0 context:(id)a1 scheduledModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
