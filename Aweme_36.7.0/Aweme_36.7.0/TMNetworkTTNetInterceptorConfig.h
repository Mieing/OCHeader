@class NSArray;

@interface TMNetworkTTNetInterceptorConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListPath;
@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListHost;
@property (readonly, nonatomic) unsigned long long ttnetBacktraceSampleRate;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void).cxx_destruct;

@end
