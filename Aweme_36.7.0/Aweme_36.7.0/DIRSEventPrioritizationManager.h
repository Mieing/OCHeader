@class NSString, DIRSValue, NSDictionary, DIRSContext;

@interface DIRSEventPrioritizationManager : DIRSBasicModule <IRISModule, IRISConfigurationObserver, IRISParameterHandler, IRISConfigurationHandler>

@property (nonatomic) long long configVersion;
@property (retain) DIRSValue *config;
@property (retain, nonatomic) NSDictionary *throttlterConfig;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (id)exportFeatureParameters;
- (void)onRealtimeSettingsDidUpdate:(id)a0;
- (id)filePath;
- (void).cxx_destruct;
- (void)commonInit;
- (void)restore;
- (void)_apply:(id)a0;

@end
