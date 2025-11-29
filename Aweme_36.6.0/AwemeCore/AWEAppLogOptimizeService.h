@interface AWEAppLogOptimizeService : NSObject

@property (nonatomic) long long limitRequestCountForBadNet;
@property (nonatomic) long long limitRequestCountForBadNetWhenExposure;
@property (nonatomic) long long limitRequestCountForLaunchStage;
@property (nonatomic) BOOL limitRequestLockForLaunchStage;

+ (id)sharedInstance;

- (BOOL)enableLimitRequestWhenBadNet;
- (BOOL)enableLimitRequestWhenLaunch;
- (BOOL)enableAppLogBadNetExposureOpt;
- (BOOL)shouldLimitRequestWhenBadNet;
- (BOOL)shouldLimitRequestWhenLaunch:(long long)a0;
- (BOOL)shouldLimitRequestWhenBadNetWithExposure;
- (BOOL)enableLimitRequestWhenNoNet;
- (BOOL)p_isWeakNetwork;
- (BOOL)judgeWeakNetworkWithLastRequestStatus;
- (long long)limitRequestPassInterval;
- (long long)weakNetworkMaxConnectionType;
- (BOOL)enableLimitRequestWhenBadNetWithExposure;
- (long long)maxLimitRequestCountForLaunchStage;
- (BOOL)isTargetBatchIntervalForLaunchLimitRequest:(long long)a0;
- (id)limitRequestWhenBadNetStateConfig;
- (id)limitRequestWhenLaunchStateConfig;
- (BOOL)enableLimitRequest;
- (BOOL)shouldLimitCurrentRequest:(long long)a0;

@end
