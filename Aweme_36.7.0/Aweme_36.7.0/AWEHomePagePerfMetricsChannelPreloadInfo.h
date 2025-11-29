@class NSString;

@interface AWEHomePagePerfMetricsChannelPreloadInfo : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (nonatomic) long long pitayaTriggerCount;
@property (nonatomic) BOOL pitayaBusinessHandle;
@property (nonatomic) long long clickTriggerCount;
@property (nonatomic) BOOL clickBusinessHandle;
@property (nonatomic) long long slidingTriggerCount;
@property (nonatomic) BOOL slidingBusinessHandle;
@property (copy, nonatomic) NSString *firstTriggerType;
@property (nonatomic) double firstTriggerTime;
@property (nonatomic) double channelEnterTime;

- (long long)preloadTriggerCount;
- (void)triggerPreload:(id)a0 time:(double)a1 businessHandle:(BOOL)a2;
- (void).cxx_destruct;

@end
