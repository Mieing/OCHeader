@class NSString, NSMutableDictionary;

@interface AWEBatteryMonitor : NSObject

@property (nonatomic) float lastBatteryLevel;
@property (nonatomic) double lastBatteryLevelTime;
@property (nonatomic) double lastChargingTime;
@property (nonatomic) double lastDischargingTime;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableDivideMultipleLevel;
@property (nonatomic) double latestSceneEnterTime;
@property (retain, nonatomic) NSString *latestScene;
@property (retain, nonatomic) NSMutableDictionary *sceneTimeArr;
@property (nonatomic) long long index;

+ (void)start;
+ (id)sharedMonitor;

- (void)onAppWillEnterForeground;
- (void)onBatteryStateChange;
- (void)onBatteryLevelDidChange;
- (void)onPowerStateDidChange;
- (void)onSceneDidChange;
- (void)logBatteryLevelAndState;
- (void)checkBatteryState;
- (void)checkBatteryDrop;
- (void).cxx_destruct;
- (id)init;
- (void)setupData;

@end
