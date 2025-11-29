@class NSArray, IESLivePEDecisionService, NSString;

@interface IESLivePolicyEngineV2Service : IESLiveGeneralBaseService <IESLiveMessageInteractionStrategyResultProvider, IESLiveMessageInteractionStrategyFactorChangeProvider, IESLivePECepOutputObserver, IESLiveRoomWatchTimeDelegate, IESLiveStrategyCharacterObserver>

@property (retain, nonatomic) IESLivePEDecisionService *decisionService;
@property (retain, nonatomic) NSArray *syncSubscribeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)liveComponentDidLoaded;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (void)registerStrategyWithJSONDictionary:(id)a0;
- (void)checkStrategy:(id)a0 withDefaultDic:(id)a1;
- (void)addSubscriber:(id)a0 forStrategy:(id)a1 withDefaultFactor:(id)a2;
- (void)removeSubscriber:(id)a0 forStrategy:(id)a1;
- (id)factorValueWithKey:(id)a0;
- (void)strategyFactorChange:(id)a0 withFactorKey:(id)a1;
- (void)strategyFactorsChange:(id)a0;
- (void)output:(id)a0 withScope:(long long)a1;
- (void)addRoomStrategyWith:(id)a0;
- (void)characterDidChange:(id)a0 withCharacterKey:(id)a1;
- (void)setupAstScene;
- (void).cxx_destruct;

@end
