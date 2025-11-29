@class NSString, NSMutableDictionary;

@interface BDPStarkLocalFileManager : NSObject {
    BOOL _useUserDirCheckOptimization;
    BOOL _useNonatomicWriteOptimization;
    NSMutableDictionary *_simulatedUserDirSizes;
}

@property (class, readonly, nonatomic) NSString *appFileUserPrefix;

@property (copy, nonatomic) NSString *tempFolderPath;
@property (readonly, copy, nonatomic) NSString *scBasePath;
@property (readonly, copy, nonatomic) NSString *scFilesPath;
@property (readonly, copy, nonatomic) NSString *scCachesPath;
@property (readonly, copy, nonatomic) NSString *scPackagesPath;
@property (readonly, copy, nonatomic) NSString *scOldUserPath;
@property (readonly, copy, nonatomic) NSString *scLogPath;

+ (id)shareManager;
+ (long long)sizeWithPath:(id)a0;
+ (BOOL)createFolderIfNeed:(id)a0;
+ (void)fileInfosOfDirectoryAtPath:(id)a0 fileInfos:(id)a1;
+ (void)addFileInfo:(id)a0 attributes:(id)a1 fileInfos:(id)a2;
+ (id)fileInfosOfDirectoryAtPath:(id)a0;
+ (BOOL)checkUserDirSizeWithUniqueID:(id)a0 increasedSize:(long long)a1;
+ (void)addSimulatedUserDirSizeWithSize:(long long)a0 appID:(id)a1;
+ (BOOL)writeToFileWithData:(id)a0 path:(id)a1;

- (void)cleanAllUserCache;
- (double)getFileModifiedTimeWithPath:(id)a0;
- (id)getPackagePathWithID:(id)a0 versionMark:(id)a1;
- (void)cleanLogCache;
- (BOOL)cleanAllUserCacheWithAppId:(id)a0;
- (id)getUserPathWithUniqueID:(id)a0;
- (id)getUserPathWithID:(id)a0 versionType:(id)a1;
- (id)getCachePathWithID:(id)a0 versionType:(id)a1;
- (id)getCachePathWithUniqueID:(id)a0;
- (id)getUserPathWithID:(id)a0 versionType:(id)a1 forceNewUserPath:(BOOL)a2;
- (id)getCachePathWithID:(id)a0;
- (id)getOldUserPathWithID:(id)a0;
- (id)getFilesPathWithID:(id)a0;
- (id)getPackagePathWithID:(id)a0;
- (id)getLogPathWithID:(id)a0;
- (void)cleanLogCacheWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
