@class NSMutableDictionary, NSString, IESLivePEStrategyDataManager, IESLivePEStrategyDataParser;

@interface IESLivePolicyEngineService : IESLiveGeneralBaseService <IESLivePEFeatureVisitor, IESLiveRoomWatchTimeDelegate, IESLiveStrategyCharacterObserver, IESLiveMessageInteractionStrategyResultProvider, IESLiveMessageInteractionStrategyFactorChangeProvider>

@property (retain, nonatomic) IESLivePEStrategyDataManager *dataManager;
@property (retain, nonatomic) IESLivePEStrategyDataParser *dataParser;
@property (retain, nonatomic) NSMutableDictionary *factorDic;
@property (retain, nonatomic) NSMutableDictionary *subscriberDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)liveRoomWatchMinitTick:(unsigned long long)a0;
- (void)registerStrategyWithJSONDictionary:(id)a0;
- (void)checkStrategy:(id)a0 withDefaultDic:(id)a1;
- (void)addSubscriber:(id)a0 forStrategy:(id)a1 withDefaultFactor:(id)a2;
- (void)removeSubscriber:(id)a0 forStrategy:(id)a1;
- (id)factorValueWithKey:(id)a0;
- (void)strategyFactorChange:(id)a0 withFactorKey:(id)a1;
- (void)strategyFactorsChange:(id)a0;
- (id)numberValueWithKey:(id)a0;
- (id)stringValueWithKey:(id)a0;
- (id)dicWithFeatureSet;
- (void)fetchFeatureFromBackend:(id /* block */)a0;
- (void)addRoomStrategyWith:(id)a0;
- (void)subscribeStrategyFromBackEndData;
- (void)setupDecisionEnv;
- (id)relatedFactorsWithStrategyModel:(id)a0;
- (BOOL)factorDidChangeWithFactorKey:(id)a0 currentValue:(id)a1;
- (void)executeStrategyWithStrategyModels:(id)a0;
- (void)characterDidChange:(id)a0 withCharacterKey:(id)a1;
- (void).cxx_destruct;

@end
