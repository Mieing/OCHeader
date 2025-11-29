@interface TVLMonitor : NSObject

@property (nonatomic) BOOL shouldReportTimeSeries;
@property (nonatomic) double playingEventTimeInterval;

+ (id)defaultMonitor;

- (id)reportDataWithUserInfo:(id)a0;
- (id)reportDataWithLogType:(id)a0 userInfo:(id)a1;
- (id)liveSdkVersion;

@end
