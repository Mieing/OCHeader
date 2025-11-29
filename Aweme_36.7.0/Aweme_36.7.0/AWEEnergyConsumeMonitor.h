@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface AWEEnergyConsumeMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL discardOnce;
@property (nonatomic) float lastBatteryLevel;
@property (nonatomic) double latestSceneEnterTime;
@property (retain, nonatomic) NSString *latestScene;
@property (retain, nonatomic) NSMutableDictionary *sceneTimeArr;
@property (nonatomic) long long index;
@property (nonatomic) double interval;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableLabTrack;

+ (id)sharedMonitor;

- (void)onAppWillEnterForeground;
- (void)onAppEnterBackground;
- (void)onBatteryStateChange;
- (void)onSceneDidChange;
- (void)checkBatteryState;
- (void)recordBatteryDropInfo;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)setupTimer;
- (void)setupData;

@end
