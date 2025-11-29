@class NSString, NSMutableDictionary, BDPUniqueID;

@interface BDPRuntimeApp : BDPRuntime <BDPObjectReusable, BDPRuntimeAppPredefineProtocol>

@property (readonly, copy, nonatomic) NSString *bdp_pluginIdentifier;
@property (copy, nonatomic) NSString *mpLoadEventKey;
@property (nonatomic) BOOL isMixRuntime;
@property (retain, nonatomic) NSMutableDictionary *predefinesDic;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long predefineCountTotal;
@property (nonatomic) BOOL useGraph;
@property (nonatomic) BOOL reuseRuntime;
@property (copy, nonatomic) NSString *frontendSDKVersion;
@property long long predefineCount;
@property double predefineDuration;
@property (retain, nonatomic) NSString *predefineIdentifier;
@property (nonatomic) long long validFileCount;
@property (nonatomic) long long validFileSize;

+ (long long)getCreateOrder;

- (void)willRelease;
- (BOOL)isPDFPreloadWithUniqueID:(id)a0;
- (void)willRecycle;
- (BOOL)isPluginServiceLoaded:(id)a0;
- (void)bdp_preloadPluginServiceIfNeededWithPluginID:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoreCompleteBlk:(id /* block */)a0;
- (void)bdp_loadPluginServiceIfNeededWithPluginID:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoreCompleteBlk:(id /* block */)a0 lynxGroupName:(id)a1;
- (void)reportPreloadedPluginLoadInfoWithPluginId:(id)a0;
- (void)updateUniqueID:(id)a0;
- (void)setIsAppLaunched:(BOOL)a0;
- (id)clearPredefineJSScript;
- (id)bdp_lock;
- (void)setCompletion:(id /* block */)a0 forKey:(id)a1;
- (void)callAndRemoveAllCompletions:(id)a0 jsException:(id)a1 error:(id)a2;
- (void)setBdp_pluginIdentifier:(id)a0;
- (id)bdp_pluginsState;
- (id)bdp_pendingCompletions;
- (void)setupAppContext;
- (void)loadIndustrySDKImmediately;
- (void)loadIndustrySDKWhenNapiReady;
- (void)loadIndustrySDK:(id /* block */)a0;
- (BOOL)loadIndustryServiceJSFirst;
- (void)pr_loadScriptAsyncWithPath:(id)a0 call:(id)a1;
- (void)pr_callLoadscriptAsyncWithCallBack:(id)a0 isSuccess:(BOOL)a1 error:(id)a2;
- (void)setupCommon;
- (void)loadFile:(id)a0 async:(BOOL)a1 callback:(id /* block */)a2;
- (id)templateServicePromise;
- (unsigned long long)bdp_pluginState:(id)a0;
- (void)bdp_loadPluginServiceIfNeededWithPluginID:(id)a0 uniqueID:(id)a1 isFromPreload:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateRuntimeNameWithPluginId:(id)a0;
- (void)bdp_setPluginState:(id)a0 state:(unsigned long long)a1;
- (void)recordNativeAppPluginPreloadInfoWithPluginId:(id)a0 execDuration:(double)a1;
- (id)getPreloadExecDurationWithPluginId:(id)a0;
- (id)servicePreloadInfo;
- (void)setServicePreloadInfo:(id)a0;
- (void)setTemplateServicePromise:(id)a0;
- (void)buildContextApp:(id /* block */)a0;
- (void)commonInit:(id /* block */)a0 libPath:(id)a1;
- (void)setPluginStateIfNeeded:(unsigned long long)a0 forPath:(id)a1;
- (BOOL)isPluginService:(id)a0;
- (id)predefineWithUniqueID:(id)a0;
- (double)getCreateFinishTime;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (void)dealloc;

@end
