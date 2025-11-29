@class NSArray;

@interface TMNetworkModule : TMModule

@property (retain, nonatomic) NSArray *subModules;

- (void)startSubModules;
- (void)setupReporter;
- (void)setupTTNetInterceptor;
- (void)setupURLProtocolInterceptor;
- (void)setupWebviewInterceptor;
- (id)networkModuleConfig;
- (id)subModuleConfigs;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)start;
- (id)initWithConfig:(id)a0;
- (void)initSubModules;

@end
