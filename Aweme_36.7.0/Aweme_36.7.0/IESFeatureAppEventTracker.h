@class IESFeatureDayInfo;

@interface IESFeatureAppEventTracker : NSObject

@property (nonatomic) long long lastRestartTime;
@property (nonatomic) long long lastEnterBackgroundTime;
@property (nonatomic) BOOL hasEnterBackground;
@property (retain, nonatomic) IESFeatureDayInfo *dayInfo;
@property (nonatomic) long long appDayOpenCount;
@property (nonatomic) long long appLaunchTimeMs;
@property (nonatomic) long long appCurrentBackgroundCnt;
@property (nonatomic) long long appRestartType;
@property (nonatomic) long long newSessionDuration;

- (long long)appDeactiveGapTimeMs;
- (void)startNewRecordWithTimeMs:(long long)a0 restartType:(unsigned long long)a1;
- (void)increaseAppDayOpenCount;
- (void)trackPause;
- (void)trackAppLaunch;
- (void)trackAppEnterForeground;
- (void)trackAppDidEnterBackground;
- (void)trackAppWillResignActive;
- (void)trackAppWillTerminate;
- (void).cxx_destruct;
- (id)init;

@end
