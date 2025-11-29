@interface MJTemplateUtilities : NSObject

+ (void)launchMiaoJianAppFromScene:(unsigned long long)a0 withShareParams:(id)a1 resultBlock:(id /* block */)a2;
+ (void)launchMiaoJianAppFromScene:(unsigned long long)a0 withShareParams:(id)a1 resultBlock:(id /* block */)a2 doWhenWillLaunch:(id /* block */)a3;
+ (void)_checkRegularForScene:(unsigned long long)a0 withShareParams:(id)a1 checkRegularBlock:(id /* block */)a2;
+ (void)_checkMomentsRegularForScene:(unsigned long long)a0 withShareParams:(id)a1 checkRegularBlock:(id /* block */)a2;
+ (void)_onLaunchMJAppWithShareConfigure:(id)a0 resultBlock:(id /* block */)a1;
+ (BOOL)_checkIfInstalledMiaoJianForScene:(unsigned long long)a0 withShareParams:(id)a1 resultBlock:(id /* block */)a2;
+ (id)getPreloadResourcePathWithTemplateItem:(id)a0;
+ (id)getPreloadResourcePathWithTemplateInfo:(id)a0;
+ (id)getPreloadResourceFileNameWithTemplateId:(id)a0 templateType:(unsigned long long)a1 descUrl:(id)a2 descVersion:(unsigned long long)a3;
+ (id)rootDirectory;
+ (id)resourceRootDirectory;
+ (id)resourceDirectoryForType:(unsigned int)a0;
+ (id)preloadResourceRootDirectory;
+ (id)preloadResourceDirectoryForType:(unsigned long long)a0;
+ (id)cacheRootDirectory;
+ (id)cachePreviewDirectory;
+ (id)temporaryRootDirectory;
+ (id)temporaryDirectoryForType:(unsigned int)a0;
+ (id)temporaryCdnDirectory;
+ (id)materialResourcePath;
+ (id)cameraAuditPath;
+ (id)clipBundleDirectory;
+ (id)maasPersistentPath;
+ (id)maasCachesPath;
+ (id)maasResourcePath;
+ (id)maasTempPath;
+ (id)movieSessionOptions;
+ (BOOL)removeFile:(id)a0;
+ (BOOL)unzipFile:(id)a0 toDirectory:(id)a1;
+ (BOOL)mergeSubDirectory:(id)a0 toDestDirectory:(id)a1;
+ (BOOL)moveFile:(id)a0 toFile:(id)a1;
+ (unsigned long long)preGetMaasDirSize;
+ (unsigned long long)cleanMaasDir;
+ (id)checkSumOfFile:(id)a0;

@end
