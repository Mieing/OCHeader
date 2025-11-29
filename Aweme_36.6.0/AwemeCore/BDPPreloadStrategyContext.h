@class NSString, NSNumber;

@interface BDPPreloadStrategyContext : NSObject

@property (nonatomic) double deviceScore;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL isHighActiveUser;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) BOOL isLowEndDevice;
@property (nonatomic) BOOL isLowPowerModeEnabled;
@property (nonatomic) long long memoryLevel;
@property (nonatomic) double appMemoryUsage;
@property (nonatomic) double systemMemoryUsage;
@property (retain, nonatomic) NSNumber *daysNumberLastUsedMp;
@property (retain, nonatomic) NSNumber *daysNumberLastUsedHost;

+ (BOOL)highUserActiveLevel;
+ (id)context;

- (void)updateDeviceContext;
- (void).cxx_destruct;
- (id)init;

@end
