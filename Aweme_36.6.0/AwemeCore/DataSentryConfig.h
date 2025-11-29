@class NSString;

@interface DataSentryConfig : NSObject

@property (copy, nonatomic) id /* block */ configureUserLoggerBlock;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *launchID;
@property (copy, nonatomic) NSString *cacheDirectory;
@property (nonatomic) double aggrTimerInterval;
@property (nonatomic) double expirationSeconds;
@property (nonatomic) BOOL sentryEnabled;
@property (nonatomic) BOOL stainEnabled;
@property (nonatomic) long long samplingRate;
@property (copy, nonatomic) id /* block */ uploader;
@property (copy, nonatomic) id /* block */ configureCommonParametersBlock;
@property (copy, nonatomic) NSString *endpointHost;
@property (copy, nonatomic) NSString *endpointPath;
@property (nonatomic) unsigned long long maximumHTTPBody;
@property (nonatomic) unsigned long long maximumRequestsPerMinute;
@property (nonatomic) unsigned long long strategy;
@property (nonatomic) double delaySeconds;
@property (nonatomic) double timerInterval;
@property (copy, nonatomic) id /* block */ eventTransformBlock;
@property (copy, nonatomic) NSString *abtesting;

- (void).cxx_destruct;
- (id)init;

@end
