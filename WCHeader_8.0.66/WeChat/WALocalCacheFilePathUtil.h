@interface WALocalCacheFilePathUtil : NSObject

+ (id)downloadCachesDirectoryPath;
+ (id)videoCachesDirectoryPathWithURL:(id)a0;
+ (id)getWeAppLocalCacheFilePathWithAppid:(id)a0 version:(unsigned long long)a1 isDebugMode:(unsigned long long)a2 packageType:(unsigned long long)a3 moduleName:(id)a4 encryptType:(unsigned long long)a5 versionDesc:(id)a6;
+ (id)getWeAppLocalCacheFilePathWithAppInfo:(id)a0;
+ (id)getDebugWeAppLocalCacheRootDirPath;
+ (id)getWeAppDebugLocalCacheRootDirPathWithAppid:(id)a0;
+ (id)getWeAppXnetCacheRootDirPathWithAppid:(id)a0;
+ (id)getWeAppXnetCacheRootDirPath;
+ (id)getReleaseAppLocalCacheRootDirPath;
+ (id)getWeAppLocalCacheRootDirPathWithAppid:(id)a0;
+ (id)getWeAppLocalCacheRootDirPathWithPluginCodeAppid:(id)a0;
+ (id)getWeAppLocalCacheFileNameWithVersion:(unsigned long long)a0;
+ (id)getPublicResDirWithDebugModeType:(unsigned long long)a0;
+ (id)getPublicResPathWithDebugModeType:(unsigned long long)a0 version:(unsigned long long)a1;
+ (id)getPublicResPathUnpackedFromBundle;
+ (id)getPublicStoragePath;
+ (id)getAppBrandWebCacheRootDir;
+ (id)getAppBrandFrameworkLocalCacheRootDir;

@end
