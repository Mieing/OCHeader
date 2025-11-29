@class NSNumber;

@interface AWEFreeFlowDailyStatusModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *recordTimeStampNumber;
@property (nonatomic) long long pauseCount;
@property (nonatomic) long long playCount;
@property (nonatomic) BOOL lastChoiceIsPlay;
@property (nonatomic) long long noWifiLaunchCount;
@property (nonatomic) long long WifiLaunchCount;
@property (nonatomic) BOOL hasContinuousPlayTwice;

- (void)choosePause;
- (void)choosePlay;
- (void)launchAppInWifiCondition:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
