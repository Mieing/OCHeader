@class NSString, NSMutableSet, NSMutableDictionary;

@interface IESLiveBizPerformanceServiceImpl : IESLiveGeneralBaseService <IESLiveBizPerformanceService>

@property (nonatomic) double levelInheritanceTimeLimit;
@property (nonatomic) double lastExitRoomTimestamp;
@property (retain, nonatomic) NSMutableSet *upgradeP0BizScene;
@property (retain, nonatomic) NSMutableSet *upgradeP1BizScene;
@property (retain, nonatomic) NSMutableSet *upgradeP2BizScene;
@property (retain, nonatomic) NSMutableSet *upgradeP0BizDescription;
@property (retain, nonatomic) NSMutableSet *upgradeP1BizDescription;
@property (retain, nonatomic) NSMutableSet *upgradeP2BizDescription;
@property (retain, nonatomic) NSMutableSet *degradeP0BizScene;
@property (retain, nonatomic) NSMutableSet *degradeP1BizScene;
@property (retain, nonatomic) NSMutableSet *degradeP2BizScene;
@property (retain, nonatomic) NSMutableSet *degradeP0BizDescription;
@property (retain, nonatomic) NSMutableSet *degradeP1BizDescription;
@property (retain, nonatomic) NSMutableSet *degradeP2BizDescription;
@property (retain, nonatomic) NSMutableDictionary *bizCallbackDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (unsigned long long)registerBizWithKey:(id)a0 performanceBlock:(id /* block */)a1;
- (void)deregisterBizWithKey:(id)a0;
- (void)switchStateChangedBlock:(id /* block */)a0;
- (void)currentModeChangeFrom:(long long)a0 to:(long long)a1;
- (void)currentModeChangeFromDegradeP2To:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromDegradeP1To:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromDegradeP0To:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromNormalTo:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromUpgradeP0To:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromUpgradeP1To:(long long)a0 changeLog:(id)a1;
- (void)currentModeChangeFromUpgradeP2To:(long long)a0 changeLog:(id)a1;
- (void)executeAndRecord:(id)a0 bizSceneCallback:(id)a1 with:(long long)a2 changeLog:(id)a3;
- (id)p_bizPerformanceModeToString:(long long)a0;
- (long long)currentModeLevel;
- (BOOL)degradeModeEnabled;
- (void)degradeModeChanged:(BOOL)a0;
- (BOOL)upgradeModeEnabled;
- (void)upgradeModeChanged:(BOOL)a0;
- (BOOL)demoteModeEnabled;
- (void)demoteModeChanged:(BOOL)a0;
- (long long)currentPerformanceModeLevel;
- (id)currentDegradeFunction;
- (id)currentDemoteFunction;
- (id)currentUpgradeFunction;
- (BOOL)currentModeChangeTo:(long long)a0;
- (void).cxx_destruct;

@end
