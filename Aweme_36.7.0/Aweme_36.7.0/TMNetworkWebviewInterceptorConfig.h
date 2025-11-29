@class NSArray;

@interface TMNetworkWebviewInterceptorConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListPath;
@property (readonly, copy, nonatomic) NSArray *readHTTPBodyBlackListHost;
@property (readonly, nonatomic) BOOL enableModifyWebViewTraffic;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void).cxx_destruct;

@end
