@class NSDictionary;

@interface IESLLABTestExperimentManager : NSObject

@property (copy, nonatomic) id /* block */ requestHeadersBlock;
@property (copy, nonatomic) id /* block */ requestParamsBlock;
@property (readonly, nonatomic) NSDictionary *requestHeaders;
@property (readonly, nonatomic) NSDictionary *requestParams;

+ (void)registerRequestParamsBlock:(id /* block */)a0 headersBlock:(id /* block */)a1;
+ (id)getRegisteredExperimentWithKey:(id)a0;
+ (void)p_fetchSDKSettingsForceUpdate:(BOOL)a0;
+ (void)p_evalRegisterFunctionForKey:(id)a0;
+ (void)p_retrieveRegisterFunctionsFromSectionData;
+ (id)registersCache;
+ (void)fetchSDKExperiments;
+ (id)registeredExperiments;
+ (void)p_evalAllRegisterFunctions;
+ (void)fetchSDKExperimentsIfNeeded;
+ (void)registerExperimentWithKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2 isBind2User:(BOOL)a3 isSticky:(BOOL)a4 autoExpose:(BOOL)a5 completion:(id /* block */)a6;
+ (void)lazyRegisterExperiments;
+ (void)editExperimentForKey:(id)a0 value:(id)a1;
+ (void)enumerateExperimentsUsingBlock:(id /* block */)a0;
+ (void)initialize;
+ (id)sharedInstance;

- (void)userDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
