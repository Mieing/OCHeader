@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDPOfflineFileCacheManager : NSObject

@property (copy, nonatomic) NSString *offlineFolderPath;
@property (copy, nonatomic) NSString *offlineTempPath;
@property (copy, nonatomic) NSString *offlineConfigPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileProcessQueue;

+ (id)shareManager;

- (BOOL)hasCacheWithModuleName:(id)a0 filePath:(id)a1;
- (void)updateLocalConfigWithPackage:(id)a0;
- (id)syncGetDataWithModuleName:(id)a0 filePath:(id)a1 needTrack:(BOOL)a2;
- (id)_getLocalOfflineConfig;
- (void)setupDefaultOfflineZipIfNeed;
- (BOOL)setupOffineZipWithPath:(id)a0 package:(id)a1 error:(id *)a2;
- (id)syncGetDataWithModuleName:(id)a0 filePath:(id)a1;
- (id)getLocalOfflinePackagesConfig;
- (void).cxx_destruct;
- (id)init;

@end
