@class NSMapTable, NSDictionary, NSMutableSet, NSString, AWEThermalMitigationNotificationCenter;
@protocol AWEThermalMitigationClientAIProtocol;

@interface AWEThermalMitigationManager : NSObject <AWECPULevelObserverProtocol>

@property (retain, nonatomic) NSMapTable *weakSubscribesMap;
@property (nonatomic) unsigned long long previousStrategy;
@property (nonatomic) unsigned long long currentStrategy;
@property (retain, nonatomic) NSMutableSet *persistAllowKeys;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableSet *pauseKeys;
@property (retain, nonatomic) AWEThermalMitigationNotificationCenter *thermalMitigationNotiCenter;
@property (nonatomic) unsigned long long localSwitch;
@property (nonatomic) BOOL nunkiThermalMitigationEnable;
@property (nonatomic) unsigned long long lastThermalMitigationSwitchState;
@property (nonatomic) BOOL ABTestEnable;
@property (retain, nonatomic) NSDictionary *ABTestConfig;
@property (nonatomic) BOOL settingsSwitch;
@property (nonatomic) BOOL currentPowerState;
@property (nonatomic) long long currentThermalState;
@property (nonatomic) long long currentBatteryLevelLess;
@property (nonatomic) unsigned long long currentThermalMitigationSwitchState;
@property (weak, nonatomic) id<AWEThermalMitigationClientAIProtocol> clientAI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidForKey:(id)a0;
+ (void)registerABExperiment;
+ (void)pauseStrategyForKey:(id)a0;
+ (BOOL)isStrategyOn:(unsigned long long)a0;
+ (void)registerStrategy:(unsigned long long)a0 checkImmediately:(BOOL)a1 block:(id /* block */)a2;
+ (BOOL)enableThermalMitigationWithNunki;
+ (unsigned long long)thermalMitigationSwitch;
+ (void)setThermalMitigationSwitch:(unsigned long long)a0;
+ (id)shared;

- (void)onAppDidEnterBackground;
- (BOOL)globalSettingsSwitch;
- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (void)predictionCpuLevelDidUpdate:(long long)a0;
- (void)onThermalStateChange:(id)a0;
- (BOOL)setupABTestEnable;
- (id)setupABTestConfig;
- (BOOL)setupSettingsSwitch;
- (BOOL)persistToEndEnable;
- (void)experimentExposureIfNeededWithStrategy:(unsigned long long)a0;
- (void)sendFurionMessage:(id)a0 isOpen:(id)a1;
- (unsigned long long)generateNewStateFromPowerState:(unsigned long long)a0;
- (unsigned long long)generateNewState:(long long)a0 fromThermalState:(unsigned long long)a1;
- (unsigned long long)generateNewStateFromBatteryLevel:(unsigned long long)a0;
- (void)notifySubscribes;
- (void)onPowerStateChange;
- (void)onBatteryLevelChange;
- (BOOL)cpuLevelEnable;
- (void)onCPUDidFallbackAfterLaunching;
- (unsigned long long)addStrategy:(unsigned long long)a0 toCurrent:(unsigned long long)a1;
- (unsigned long long)removeStrategy:(unsigned long long)a0 fromCurrent:(unsigned long long)a1;
- (void)setNewStrategy:(unsigned long long)a0;
- (unsigned long long)generateNewState:(long long)a0 fromCPULevel:(unsigned long long)a1;
- (unsigned long long)generateNewState:(long long)a0 fromCPUPredictLevel:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupData;

@end
