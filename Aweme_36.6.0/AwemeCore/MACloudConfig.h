@class NSString, NSDictionary, UIImage, NSObject, AMapCacheFileManager;
@protocol OS_dispatch_queue;

@interface MACloudConfig : NSObject {
    AMapCacheFileManager *_fileManager;
    BOOL _allowCleanCache;
    long long _cleanCacheTimespan;
    BOOL _allowShowLogo;
    BOOL _allowShowApprovalNum;
    NSString *_normalApprovalNum;
    NSString *_satelliteApprovalNum;
    NSString *_terrainApprovalNum;
    BOOL _allowUploadAnnotationInfo;
    BOOL _allowCloudMapLogo;
    NSString *_mapLogoMD5_day;
    NSString *_mapLogoMD5_night;
    NSString *_mapLogoPath_day;
    NSString *_mapLogoPath_night;
    UIImage *_mapLogo_day;
    UIImage *_mapLogo_night;
    BOOL _isMapLogoDownloading;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_fileDispatchQueue;
    NSDictionary *_currentConfigResponse;
    BOOL _mvtEnable;
    BOOL _gltfEnable;
    BOOL _terrainEnable;
}

@property (nonatomic) long long lastCleanCacheTimestamp;

+ (id)sharedInstance;

- (void)setDefaultConfig;
- (void)reloadAllCacheConfig;
- (void)setDefaultMapLogoConfig;
- (void)updateControlWithResponse:(id)a0;
- (void)updateMapLogoWithConfigDicIfNeed:(id)a0;
- (void)saveLastCloudConfig:(id)a0;
- (BOOL)shouldCleanDiskCache;
- (void)saveLastCleanCacheTimestamp;
- (void)reloadLastCleanCacheTimestamp;
- (void)reloadLastCloudConfig;
- (void)reloadMapLogoData;
- (void)saveMapLogoData;
- (void)updateCloudDataWithKeys:(id)a0 handler:(id /* block */)a1;
- (void)cleanDiskCacheIfNeedForMapView:(id)a0;
- (BOOL)shouldShowLogo;
- (BOOL)shouldShowApprovalNumber;
- (id)mapContentApprovalNumber;
- (id)satelliteImageApprovalNumber;
- (id)terrainApprovalNumber;
- (BOOL)shouldUploadAnnotationInfo;
- (id)dailyMapLogo;
- (id)nightlyMapLogo;
- (BOOL)mvtEnable;
- (BOOL)gltfEnable;
- (BOOL)terrainEnable;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initProperties;

@end
