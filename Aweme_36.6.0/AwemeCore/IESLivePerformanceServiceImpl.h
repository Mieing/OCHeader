@class NSString;

@interface IESLivePerformanceServiceImpl : IESLiveGeneralBaseService <IESLivePerformanceService, HTSLiveAudienceActions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (long long)currentRiskLevel;
- (long long)currentDeviceType:(BOOL)a0;
- (void)registerStrategyName:(id)a0 activate:(id /* block */)a1;
- (void)unregisterStrategyName:(id)a0;
- (void)addObserver:(id)a0;
- (long long)currentLevel;
- (void)removeObserver:(id)a0;

@end
