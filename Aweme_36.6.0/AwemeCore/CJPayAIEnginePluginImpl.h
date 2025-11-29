@class NSMutableDictionary, NSDictionary, NSString, Pitaya;

@interface CJPayAIEnginePluginImpl : NSObject <CJPayAIEnginePlugin>

@property (retain, nonatomic) NSMutableDictionary *outputs;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (retain, nonatomic) Pitaya *customInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)shareInstance;

- (void)onEventV3:(id)a0 parameter:(id)a1;
- (void)removeAppLogRunEventCallback:(id)a0;
- (id)getOutputForBusiness:(id)a0;
- (void)runTask:(id)a0 params:(id)a1 runCallback:(id /* block */)a2;
- (void)registerAppLogRunEvent:(id)a0 callback:(id /* block */)a1;
- (void)setupCustomPitaya;
- (void)setupCustomPitaya:(id)a0 appId:(id)a1 appVersion:(id)a2;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
