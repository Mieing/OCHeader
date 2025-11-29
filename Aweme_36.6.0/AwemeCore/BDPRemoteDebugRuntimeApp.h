@class NSString;

@interface BDPRemoteDebugRuntimeApp : BDPRemoteDebugRuntime

@property (readonly, copy, nonatomic) NSString *bdp_pluginIdentifier;
@property (nonatomic) long long taskID;
@property (nonatomic) BOOL disPluginDebug;
@property (nonatomic) BOOL isMixRuntime;

+ (void)bootstrapLaunch;
+ (id)debugRuntimeWithUniqueID:(id)a0;
+ (unsigned long long)type;

- (long long)generateTaskID;
- (BOOL)isPluginServiceLoaded:(id)a0;
- (id)bdp_pluginIdentifier;
- (void)bdp_loadPluginServiceIfNeededWithPluginID:(id)a0 completion:(id /* block */)a1;
- (void)updateUniqueID:(id)a0;
- (void)subscribeHandler:(id)a0 sourceID:(long long)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)setIsAppLaunched:(BOOL)a0;
- (unsigned long long)pluginState:(id)a0;
- (id)bdp_lock;
- (void)setCompletion:(id /* block */)a0 forKey:(id)a1;
- (void)setPluginState:(id)a0 state:(unsigned long long)a1;
- (void)callAndRemoveAllCompletions:(id)a0 jsException:(id)a1 error:(id)a2;
- (void)setBdp_pluginIdentifier:(id)a0;
- (id)bdp_pluginsState;
- (id)bdp_pendingCompletions;
- (void)buildContextAppWithUniqueID:(id)a0;
- (void)setupAppContext;
- (void)updateUniqueIDFix:(id)a0;
- (void)loadIndustrySDKImmediately;
- (void)loadIndustrySDKWhenNapiReady;
- (void)loadIndustrySDK:(id /* block */)a0;
- (BOOL)loadIndustryServiceJSFirst;
- (id)convertPageWithRoute:(id)a0;
- (void)convertParamToRequestParam:(id)a0;
- (id)convertRouteWithWebviewId:(id)a0;
- (void)pr_loadScriptAsyncWithPath:(id)a0 call:(id)a1;
- (void)pr_callLoadscriptAsyncWithCallBack:(id)a0 isSuccess:(BOOL)a1 error:(id)a2;
- (void)setupCommon;
- (id)convertWebviewIdWithRoute:(id)a0;
- (id)initWithUniqueID:(id)a0;

@end
