@class NSString, IESLiveCountTimer, IESLiveStableModeStrategyCenter, IESLiveStableModeDecisionCenter;

@interface IESLiveStableModeServiceImp : IESLiveGeneralBaseService <IESLiveStableModeService>

@property (retain, nonatomic) IESLiveStableModeDecisionCenter *decisionCenter;
@property (retain, nonatomic) IESLiveStableModeStrategyCenter *strategyCenter;
@property (retain, nonatomic) IESLiveCountTimer *decisionCountTimer;
@property (nonatomic) long long currentDecisionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)registerStrategy:(id)a0;
- (void)stopDecisionTimer;
- (void)createDecisionCenter;
- (void)createStrategyCenter;
- (void)startDecisionTimer;
- (void)handleDecisionLevel:(long long)a0 triggerKey:(id)a1;
- (void).cxx_destruct;

@end
