@class NSString, NSMutableDictionary;

@interface IESLiveSpeedPerformanceStrategyService : IESLiveGeneralBaseService <IESLiveBizPerformanceService>

@property (retain, nonatomic) NSMutableDictionary *bizCallbackDic;
@property (copy, nonatomic) id /* block */ switchStateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (unsigned long long)registerBizWithKey:(id)a0 performanceBlock:(id /* block */)a1;
- (void)deregisterBizWithKey:(id)a0;
- (void)switchStateChangedBlock:(id /* block */)a0;
- (void)switchStateChanged;
- (void)setSpeedModeEnable:(BOOL)a0;
- (void)setDemoteSoundImageEnable:(BOOL)a0;
- (void)setDemoteLiveFunctionEnable:(BOOL)a0;
- (void)registerSmartStrategy:(id)a0;
- (void)observerForBiz;
- (void).cxx_destruct;

@end
