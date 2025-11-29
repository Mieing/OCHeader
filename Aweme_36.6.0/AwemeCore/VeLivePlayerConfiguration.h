@interface VeLivePlayerConfiguration : NSObject

@property (nonatomic) BOOL enableSei;
@property (nonatomic) BOOL enableHardwareDecode;
@property (nonatomic) BOOL enableLiveDNS;
@property (nonatomic) BOOL enableStatisticsCallback;
@property (nonatomic) long long statisticsCallbackInterval;
@property (nonatomic) long long networkTimeoutMs;
@property (nonatomic) long long retryIntervalTimeMs;
@property (nonatomic) long long retryMaxCount;

- (id)description;
- (id)init;

@end
