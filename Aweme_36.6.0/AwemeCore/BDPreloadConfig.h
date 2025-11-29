@class NSArray, NSString;

@interface BDPreloadConfig : NSObject

@property (copy, nonatomic) NSArray *skipSSLCertificateList;
@property (copy, nonatomic) NSString *diskCachePath;
@property (nonatomic) long long diskCountLimit;
@property (nonatomic) double diskAgeLimit;
@property (nonatomic) long long memorySizeLimit;
@property (nonatomic) double memoryAgeLimit;
@property (nonatomic) long long maxConcurrentTaskCount;
@property (nonatomic) long long maxConcurrentTaskCountInWiFi;
@property (nonatomic) long long maxConcurrentHardTaskCount;
@property (nonatomic) long long maxConcurrentHardTaskCountInWiFi;
@property (nonatomic) double maxWaitTime;
@property (nonatomic) double maxRunningTime;
@property (nonatomic) BOOL enableFollowRedirect;

+ (id)sharedConfig;

- (BOOL)needVerifySSL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
