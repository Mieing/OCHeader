@interface UnisusPluginManager : NSObject

+ (BOOL)hasLocalPkg:(id)a0 version:(id)a1;
+ (void)downloadDebug:(id)a0 url:(id)a1 version:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)getCleanableSize:(unsigned long long)a0 oldVersionTTL:(unsigned long long)a1;
+ (void)cleanUnusedPlugins:(unsigned long long)a0 oldVersionTTL:(unsigned long long)a1;
+ (id)mapIndustrySdkComponent:(id)a0;
+ (id)mapIndustrySdkPath:(id)a0;
+ (void)deleteAll;
+ (void)prefetchConfig;
+ (void)setHostConfig:(id)a0;

@end
