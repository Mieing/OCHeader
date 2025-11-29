@class NSString, DIRSValue, NSArray, NSError, NSDictionary, DIRSContext;

@interface DIRSEventFilterPlugin : DIRSBasicModule <IRISModule, IRISParameterHandler, IRISConfigurationObserver, IRISEventProcedureHandler, IRISConfigurationHandler> {
    NSError *outError;
    BOOL isBlockList;
    NSArray *filterEventList;
    NSDictionary *filterFieldsForEvent;
}

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
+ (id)moduleVersion;

- (id)exportFeatureParameters;
- (BOOL)handleProcedure:(id)a0 withError:(id *)a1;
- (void)onRemoteSettingsDidUpdate:(id)a0;
- (id)outError;
- (void).cxx_destruct;
- (void)commonInit;
- (void)restore;
- (void)_apply:(id)a0;

@end
