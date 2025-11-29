@class NSArray;

@interface TMNetworkURLProtocolInterceptorConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListPath;
@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListHost;
@property (readonly, copy, nonatomic) NSArray *urlProtocolInterceptBlackListPath;
@property (readonly, copy, nonatomic) NSArray *urlProtocolInterceptBlackListHost;
@property (readonly, nonatomic) BOOL urlProtocolEnableInterceptSessionWithConfiguration;
@property (readonly, nonatomic) BOOL urlProtocolEnableUIAction;
@property (readonly, nonatomic) BOOL urlProtocolEnableBacktrace;
@property (readonly, nonatomic) unsigned long long urlProtocolBacktraceSampleRate;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void).cxx_destruct;

@end
