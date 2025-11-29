@interface BDPFrontendSDKManager : NSObject

+ (id)localLibVersionString;
+ (id)getBizBundleVersionMap;
+ (id)JSLibAppCoreLynxPath;
+ (id)annieLibVersionString;
+ (long long)localLibVersion;
+ (BOOL)localLibExisted;
+ (void)setupBundleVersionIfNeed;
+ (long long)getBaseBundleV2Value;
+ (long long)getBaseBundleV2PresetValue;
+ (id)getConfigVersionMap;
+ (id)getLocalExistVersionMap;
+ (id)getNotifyAndSelectRecordDict;
+ (id)getDynamicJSSDKAbsoluteFilePathWithURL:(id)a0 path:(id)a1;
+ (id)JSLibPath;
+ (long long)builtInLibVersion;
+ (void)downloadLibWithURL:(id)a0 updateVersion:(id)a1 baseVersion:(id)a2 bundleType:(id)a3 isForceUpdate:(BOOL)a4 completion:(id /* block */)a5;
+ (id)getFilePath:(id)a0 fromBiz:(id)a1;
+ (void)resetLocalLibVersionCache;
+ (void)excuteAfterUnzip:(id /* block */)a0;
+ (void)updateLibIfNeedWithCompletion:(id /* block */)a0;
+ (void)downloadLibWithURL:(id)a0 updateVersion:(id)a1 baseVersion:(id)a2 bundleType:(id)a3 completion:(id /* block */)a4;
+ (void)clearPreloadMemoryCache;
+ (id)JSLibAppCorePath;
+ (id)JSLibInteractionPluginCorePath;
+ (id)JSLibAppWorkerPath;
+ (id)JSLibJSWithName:(id)a0;
+ (id)JSLibGameCorePath;
+ (id)JSLibPlayCorePath;
+ (id)JSLibVConsolePath;
+ (id)JSLibWebpHookPath;
+ (id)JSLibWebviewComponentApiPath;
+ (id)JSLibWebviewComponentPolyfillsPath;
+ (id)getDynamicJSSDKFileDataWithRelativePath:(id)a0;

@end
