@class NSString, NSDictionary, DIRSContext;

@interface DIRSEventUIDParameterSetter : DIRSBasicModule <IRISEventProcedureHandler, IRISConfigurationObserver> {
    NSDictionary *anonymousInfo;
    long long currentUID;
}

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
- (void).cxx_destruct;
- (void)commonInit;

@end
