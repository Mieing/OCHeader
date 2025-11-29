@class IESLivePerfSampleContext;

@interface IESLiveBatteryMonitor : NSObject

@property (nonatomic) float cursorLevel;
@property (nonatomic) double cursorTime;
@property (nonatomic) float costSummary;
@property (nonatomic) float levelDeltaSummary;
@property (nonatomic) float currentBatteryLevel;
@property (nonatomic) double triggerLowLevelTime;
@property (nonatomic) BOOL enableTrackBattery;
@property (retain, nonatomic) IESLivePerfSampleContext *context;

- (void)trackLowBatteryLevelStopReason:(id)a0;
- (void)recordBatteryChangeIfNeed;
- (void)trackBatteryLevelIfNeeded:(float)a0 state:(long long)a1;
- (id)levelChangePer100Seconds;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)setup;

@end
