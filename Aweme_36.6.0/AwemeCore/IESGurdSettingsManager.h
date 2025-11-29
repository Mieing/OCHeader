@class IESGurdSettingsResponse, NSTimer, IESGurdSettingsResponseExtra;

@interface IESGurdSettingsManager : NSObject

@property (retain) IESGurdSettingsResponse *settingsResponse;
@property (nonatomic) long long pollingInterval;
@property (retain, nonatomic) NSTimer *pollingRequestTimer;
@property (retain) IESGurdSettingsResponseExtra *extra;
@property (nonatomic) BOOL settingsSuccess;

+ (id)sharedInstance;

- (void)setupTimerIfNeeded;
- (void)fetchSettingsWithRequestType:(long long)a0;
- (void)handleSettingsResponse:(id)a0;
- (void)afterSettings;
- (void)handleSettingsConfig:(id)a0;
- (void)fetchSettingsPollingHandler;
- (void)recordOnlineStats;
- (void)recordUsage;
- (void).cxx_destruct;
- (void)cleanCache;

@end
