@class NSArray, NSString, DIRSContext;

@interface DIRSEventPrioritizationPlugin : DIRSBasicModule <IRISEventProcedureHandler, IRISEventPrioritizationConfigurationObserver, IRISConfigurationObserver> {
    NSArray *holder;
}

@property (retain, nonatomic) NSArray *prioritizationUnits;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleDependencies;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (BOOL)handleProcedure:(id)a0 withError:(id *)a1;
- (void)onRemoteSettingsDidUpdate:(id)a0;
- (void)onPrioritizationConfigurationUpdated:(id)a0;
- (void)onPrioritizationThrottlterConfigurationUpdated:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)restore;
- (void)_apply:(id)a0;
- (void)_restore;

@end
