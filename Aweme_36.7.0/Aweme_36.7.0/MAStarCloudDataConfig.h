@class NSString, NSFileManager, NSBundle;

@interface MAStarCloudDataConfig : NSObject <MAMapServiceDataConfig> {
    NSString *_mapDataPath;
    NSString *_mapDataCachePath;
    NSString *_mapOnLineDataPath;
    NSString *_mapExtResPath;
    NSFileManager *_fileManager;
    NSString *_rootPath;
    NSString *_customStyleDataCachePath;
    NSBundle *_amapBundle;
    NSString *_engineBundlePath;
    NSString *_engineCrossResourcePath;
    NSString *_indoorDataPath;
    NSString *_offlineRootPath;
    NSString *_offlineDataPath;
    NSString *_offlineCachePath;
    NSString *_offlinePackagePath;
    NSString *_terrainDemPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getIconResourceByPrefix:(id)a0;
- (id)getResourceByName:(id)a0;
- (id)mapBundlePath;
- (void)preInit;
- (id)dataCachePath;
- (id)allIconFilesAtPath:(id)a0;
- (id)getRootPath;
- (id)offlineDataPath;
- (id)indoorDataPath;
- (id)offlinePackagePath;
- (id)offlineRootPath;
- (id)offlineCachePath;
- (id)engineBundlePath;
- (id)engineCrossResourcePath;
- (id)customStyleDataCachePath;
- (id)terrainDemPath;
- (void)postInit;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (id)dataPath;

@end
