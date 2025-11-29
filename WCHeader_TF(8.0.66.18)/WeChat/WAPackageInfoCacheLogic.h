@class NSMutableDictionary, NSMutableSet;

@interface WAPackageInfoCacheLogic : NSObject {
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableDictionary *_dicUnpackedPackageInfo;
    NSMutableSet *_setUnpackedPkgFilePath;
    long long _unpackTime;
    NSMutableDictionary *_dicCacheFileAccessedTimeRecord;
}

- (id)init;
- (void)dealloc;
- (id)getCacheFileInfoKeyWithSubPath:(id)a0 appid:(id)a1 version:(unsigned long long)a2 isDebugMode:(unsigned long long)a3;
- (BOOL)unpackPkgWithFilePath:(id)a0 unpackLib:(void *)a1;
- (void)removePackageCacheIfDifferentPackageType:(unsigned long long)a0 appId:(id)a1 version:(unsigned long long)a2 isDebugMode:(unsigned long long)a3;
- (BOOL)unpackPkgFromPath:(id)a0 appid:(id)a1 version:(unsigned long long)a2 isDebugMode:(unsigned long long)a3 packageType:(unsigned long long)a4 extParams:(id)a5;
- (BOOL)hasUnpackedPackageWithAppId:(id)a0 version:(unsigned long long)a1 isDebugMode:(unsigned long long)a2;
- (void)clearAllPkgInfo;
- (void)removePackageFilePathCache:(id)a0;
- (id)getCacheFileInfoWithFullUrl:(id)a0;
- (id)contentsOfDirectoryWithFullUrl:(id)a0 error:(id *)a1;
- (BOOL)unpackPublicResPkgFromPath:(id)a0 isDebugMode:(unsigned long long)a1 version:(unsigned long long)a2;
- (BOOL)isString:(id)a0 inArray:(id)a1;
- (long long)getUnpackTime;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)a0;
- (long long)getAccessedTimeWithFullUrl:(id)a0;
- (void).cxx_destruct;

@end
