@class NSMutableDictionary, NSString, NSMutableSet, AWEAwemeModel, NSMutableArray;
@protocol AWEUndertakeStrategyProtocol;

@interface AWEUndertakeStrategyManager : NSObject <AWEUGUndertakeMessage>

@property (retain, nonatomic) NSMutableSet *registeredStrategies;
@property (retain, nonatomic) NSMutableArray *customizedStrategiesWaitingQueue;
@property (retain, nonatomic) NSMutableSet *triggeredStrategySet;
@property (retain, nonatomic) id<AWEUndertakeStrategyProtocol> currentStrategy;
@property (retain, nonatomic) NSMutableDictionary *strategyTypeAndClassMap;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (id)sharedManager;

- (void)managerOnPlayAweme:(id)a0 ofIndex:(long long)a1;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (void)trackLogWithMessage:(id)a0;
- (id)getCurrentThemeID;
- (void)registerCommonStrategy;
- (void)notifyCurrentStrategyComplete:(id)a0;
- (void)notifyCurrentStrategyStart:(id)a0;
- (void)registerStrategyClass:(Class)a0 forType:(id)a1;
- (void)filterRegisteredCustomizedStrategiesAndObserve;
- (BOOL)shouldUseNewUndertake;
- (void)doActionForList:(id)a0;
- (id)processRawData:(id)a0;
- (void)createStrategiesWithData:(id)a0;
- (void)filterRegisteredCustomizedStrategies;
- (void)startObservingUndertakeStrategies;
- (void)notifyCurrentStrategyUndertake;
- (void)executeNextTriggeredStrategy;
- (void)registerCustomizedUndertakeStrategy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)handleData:(id)a0;

@end
