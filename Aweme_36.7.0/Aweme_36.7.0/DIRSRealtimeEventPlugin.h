@class NSArray, NSString, DIRSContext;

@interface DIRSRealtimeEventPlugin : DIRSBasicModule <IRISModule, IRISEventProcedureHandler, IRISConfigurationObserver>

@property (retain, nonatomic) NSArray *eventList;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (long long)priority;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (BOOL)handleProcedure:(id)a0 withError:(id *)a1;
- (void)onRemoteSettingsDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)_apply:(id)a0;

@end
