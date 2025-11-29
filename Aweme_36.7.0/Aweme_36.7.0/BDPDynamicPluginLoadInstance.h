@class BDPDynamicPluginConfigLoader, NSString, BDPUniqueID, NSMutableDictionary, BDPDynamicPluginLoader, BDPPromise, BDPSchema, BDPBootManager;

@interface BDPDynamicPluginLoadInstance : NSObject <BDPFileHandleForSubpkgProtocol, BDPDynamicPluginLoadMessage>

@property (retain, nonatomic) BDPSchema *schema;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPPromise *pluginConfigLoadPromise;
@property (retain, nonatomic) BDPDynamicPluginConfigLoader *configLoader;
@property (weak, nonatomic) BDPBootManager *bootManager;
@property (retain, nonatomic) NSMutableDictionary *dynamicPlugins;
@property (retain, nonatomic) NSMutableDictionary *nativePluginConfigDict;
@property (retain, nonatomic) BDPDynamicPluginLoader *coldBootPluginLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)wrapRuntimeServiceLoaderForceForUniqueID:(id)a0;
+ (id)instanceWithUinqueID:(id)a0 schema:(id)a1;
+ (void)wrapRuntimeServiceLoaderForUniqueID:(id)a0;

- (void)readNativePluginConfigFromPluginId:(id)a0 completion:(id /* block */)a1;
- (void)getPluginConfigWithPluginId:(id)a0 checkPath:(id)a1 completion:(id /* block */)a2;
- (void)loadFile:(id)a0 fromUniqueID:(id)a1 pluginID:(id)a2 readMode:(long long)a3 dispatchQueue:(id)a4 completion:(id /* block */)a5;
- (id)dynamicPluginLoaderForPluginID:(id)a0;
- (id)getLoadedConfigWithPluginID:(id)a0;
- (id)getDynamicPluginLoaderForPluginID:(id)a0;
- (void)mergeDynamicPluginLoaders:(id)a0;
- (void)readDataFromMemoryPkgsWithPath:(id)a0 completion:(id /* block */)a1;
- (id)realPagePathWithOriginPath:(id)a0 uniqueID:(id)a1;
- (void)readScriptWithFile:(id)a0 pluginId:(id)a1 completion:(id /* block */)a2;
- (void)updateBootManager:(id)a0 schema:(id)a1;
- (void)startLoadPluginWithPluginID:(id)a0;
- (void)updateAppConfigData:(id)a0;
- (id)dynamicPluginLaunchParams;
- (id)dynamicPluginParams;
- (id)secondDynamicPluginParamsWithPluginId:(id)a0;
- (void)loadPluginConfigWithPluginId:(id)a0 checkPath:(id)a1 completion:(id /* block */)a2;
- (void)readWebViewLibScriptWithPluginId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
