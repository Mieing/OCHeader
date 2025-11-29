@class NSMutableDictionary;

@interface BDPStarkResolverHelper : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *mpIDSemaphoreDict;

+ (BOOL)isRV;
+ (BOOL)canPreload;
+ (BOOL)checkSCPHasReadyWithSCModel:(id)a0 uniqueId:(id)a1;
+ (id)unzipFile:(id)a0 targetDir:(id)a1;
+ (id)getSCBugfixConfig;
+ (void)decompressBrotliFilesInDir:(id)a0 withCompletion:(id /* block */)a1;
+ (id)decompressBrotliFilesInDir:(id)a0;
+ (void)renamePackageIfNeed:(id)a0 inUseScModel:(id)a1 updateScModel:(id)a2;
+ (id)readPackageMd5WithMetaPath:(id)a0;
+ (void)writeSCMetaDataWithSCModel:(id)a0 size:(unsigned long long)a1 withUniqueId:(id)a2;
+ (id)checkPackageValid:(id)a0 withUniqueId:(id)a1;
+ (id)readPackageMetaDataWithAppID:(id)a0 versionMark:(id)a1;
+ (id)getPackageMetaPathWithAppID:(id)a0 versionMark:(id)a1;
+ (BOOL)hasUnityMarkerWithData:(id)a0;
+ (id)getSemaphoreForAppID:(id)a0;

@end
