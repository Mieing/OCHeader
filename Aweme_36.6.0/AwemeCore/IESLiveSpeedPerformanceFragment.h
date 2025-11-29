@class IESLiveMoreToolsSettingItem, IESLiveSpeedPerformanceStrategyService, IESLiveSpeedPerformanceEntrance, NSTimer, NSString, IESLiveSpeedPerformancePushManager;

@interface IESLiveSpeedPerformanceFragment : IESLiveRoomComponent <IESLivePerformanceChanged, IESLiveSpeedPerformancePushDelegate>

@property (retain, nonatomic) IESLiveSpeedPerformanceEntrance *entrance;
@property (retain, nonatomic) IESLiveSpeedPerformancePushManager *pushManager;
@property (weak, nonatomic) IESLiveSpeedPerformanceStrategyService *strategy;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *smoothLive;
@property (nonatomic) long long currentPerformanceLevel;
@property (nonatomic) long long currentRiskLevel;
@property (nonatomic) long long currentThermalState;
@property (nonatomic) double closeModeBatterySpeed;
@property (nonatomic) double openModeBatterySpeed;
@property (nonatomic) double closeModeStallRate;
@property (nonatomic) double openModeStallRate;
@property (retain, nonatomic) NSTimer *contentRefreshTimer;
@property (nonatomic) double performanceDemoteTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)livePerformanceChangedSenseLevel:(long long)a0 performanceInfo:(id)a1;
- (void)livePerformanceChangedThermal:(long long)a0;
- (void)livePerformanceChangedUIStallRate:(double)a0;
- (void)livePerformanceChangedBatterySpeed:(double)a0;
- (void)livePerformanceRiskLevel:(long long)a0;
- (void)switchChanged:(BOOL)a0;
- (void)trackClickArea:(id)a0 afterStatus:(BOOL)a1 autoType:(BOOL)a2;
- (void)prepareEntranceSubItems;
- (void)prepareEntranceTips;
- (void)prepareEntranceContent;
- (void)trackSpeedModeUse;
- (void)openDemoteMode:(BOOL)a0;
- (void)showToolbarGuide;
- (void).cxx_destruct;
- (double)itemWidth;

@end
