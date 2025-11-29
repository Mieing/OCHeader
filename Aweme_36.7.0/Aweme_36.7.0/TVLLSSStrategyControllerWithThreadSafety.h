@class NSString;

@interface TVLLSSStrategyControllerWithThreadSafety : TVLLSSStrategyController <TVLLSSStrategyDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchFeatureDataWithRequiredItems:(id)a0;
- (id)requestStrategyResultWithUserInfo:(id)a0;
- (void)handleABRStrategyResult:(id)a0;
- (void)handlePlayerSettings:(id)a0;
- (BOOL)handleStartUpStrategyResult:(id)a0;
- (void)handleStrategyReportInfo:(id)a0;
- (void)handleStrategyScheduleTask:(id)a0;
- (void)stop;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
