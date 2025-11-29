@class NSDictionary, NSString, DIRSContext;

@interface DIRSInternalFeatureModule : DIRSBasicModule <IRISModule, IRISConfigurationObserver, IRISParameterHandler>

@property (retain) NSDictionary *settingsHoldParamters;
@property (retain) NSDictionary *applogHoldParamters;
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

- (id)exportFeatureOptions;
- (void)onRemoteSettingsDidUpdate:(id)a0;
- (void)onRealtimeSettingsDidUpdate:(id)a0;
- (BOOL)requestExpectedEventBatchInterval:(double)a0 withOptions:(id)a1;
- (void).cxx_destruct;
- (void)commonInit;

@end
