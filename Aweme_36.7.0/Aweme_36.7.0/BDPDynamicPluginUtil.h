@interface BDPDynamicPluginUtil : NSObject

+ (long long)compareVersion:(id)a0 withVersion:(id)a1;
+ (BOOL)isPluginPath:(id)a0 uniqueID:(id)a1;
+ (id)pluginNameFromPath:(id)a0 uniqueID:(id)a1;
+ (id)pluginNameFromPath:(id)a0;
+ (BOOL)isIndustryPath:(id)a0;
+ (BOOL)isNativeAppPlugin:(id)a0 uniqueID:(id)a1;
+ (id)pluginPathWithIndustryPath:(id)a0 pluginId:(id)a1 uniqueID:(id)a2;
+ (id)getDependedNativePluginInfoWithPagePath:(id)a0 uniqueId:(id)a1;
+ (id)nativeAppPluginNameFromPath:(id)a0 uniqueID:(id)a1;
+ (BOOL)isIndustry:(id)a0;
+ (id)getAllDependNativeAppPluginList:(id)a0 model:(id)a1;
+ (void)loadPluginServiceWithPluginIdArr:(id)a0 runtime:(id)a1 complete:(id /* block */)a2;
+ (BOOL)nativeAppPluginEnableWithUniqueID:(id)a0;
+ (id)getNativePluginInfoWithModel:(id)a0;
+ (id)getAllDependNativeAppPluginListWithConfig:(id)a0 pagePath:(id)a1 model:(id)a2;
+ (BOOL)containsPreviewPluginInfo:(id)a0;
+ (id)getNativePluginMetricsInfoWithModel:(id)a0;
+ (id)pluginPathForRealPath:(id)a0 pluginId:(id)a1 uniqueID:(id)a2;
+ (BOOL)isPluginPath:(id)a0;
+ (id)pluginVersionWithUniqueid:(id)a0 pluginId:(id)a1;
+ (id)getRealModelWithUniqueID:(id)a0;
+ (id)pluginPathForRealPath:(id)a0 pluginId:(id)a1;
+ (BOOL)isDynamicPluginUrl:(id)a0;
+ (id)pluginNameFromPath:(id)a0 model:(id)a1;
+ (id)_dynamicPluginNameFromUrl:(id)a0;
+ (id)_pluginPathPrefixForPluginId:(id)a0;
+ (id)_allComponentsForUrl:(id)a0;
+ (id)unavailablePluginInfo:(id)a0;
+ (BOOL)checkIsValidNativeAppPlugin:(id)a0;
+ (id)getPluginIdListForPagePath:(id)a0 uniqueID:(id)a1;
+ (id)nativeAppPluginNameFromPath:(id)a0 model:(id)a1;
+ (id)getPluginIdListForPageConfig:(id)a0 model:(id)a1;
+ (void)readRealPathFromPagePath:(id)a0 readPath:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
+ (BOOL)isMinimumBaseLibVersionMetWithPluginID:(id)a0 uniqueID:(id)a1;
+ (id)matchCloudPluginFromIndustryPath:(id)a0 model:(id)a1;
+ (BOOL)checkNeedMapIndustryWithPluginId:(id)a0 model:(id)a1;
+ (BOOL)enableIndustryApiReplacedByNativeAppPlugin:(id)a0;
+ (id)getPreloadPageConfigWithDict:(id)a0 pagePath:(id)a1;

@end
