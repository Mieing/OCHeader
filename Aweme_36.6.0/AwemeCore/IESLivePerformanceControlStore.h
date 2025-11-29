@interface IESLivePerformanceControlStore : NSObject

@property (nonatomic) double lastPushTimestamp;
@property (nonatomic) double pushTimeGap;
@property (nonatomic) long long pushTimesLimitSingleDay;
@property (nonatomic) long long pushTimesToday;
@property (nonatomic) BOOL pushed;
@property (nonatomic) long long toastTimesLimitSingleDay;
@property (nonatomic) long long toastTimesToday;
@property (nonatomic) double lastToastTimestamp;
@property (nonatomic) double toastTimeGap;

- (void)recordPushTimes;
- (BOOL)canToast;
- (void)recordToastTimes;
- (id)init;
- (void)setupData;
- (BOOL)canPush;

@end
