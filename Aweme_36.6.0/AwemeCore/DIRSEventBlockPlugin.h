@class DIRSValue, NSString, DIRSContext;

@interface DIRSEventBlockPlugin : DIRSBasicModule <IRISModule, IRISConfigurationObserver, IRISEventProcedureHandler, IRISConfigurationHandler>

@property (retain, nonatomic) DIRSValue *config;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (BOOL)handleProcedure:(id)a0 withError:(id *)a1;
- (void)onRealtimeSettingsDidUpdate:(id)a0;
- (id)outError;
- (void).cxx_destruct;
- (void)commonInit;
- (void)restore;

@end
