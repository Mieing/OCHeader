@class NSString;

@interface VeLivePlayerLogConfig : NSObject

@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *logPath;
@property (nonatomic) unsigned long long maxLogSizeM;
@property (nonatomic) unsigned long long singleLogSizeM;
@property (nonatomic) unsigned long long logExpireTimeS;
@property (nonatomic) BOOL enableConsole;
@property (nonatomic) BOOL enableLogFile;
@property (nonatomic) unsigned long long logLevel;
@property (copy, nonatomic) NSString *queryUrl;
@property (nonatomic) unsigned long long intervalMs;
@property (nonatomic) int enableThreadLoop;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
