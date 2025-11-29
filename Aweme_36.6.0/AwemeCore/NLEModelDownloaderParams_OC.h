@interface NLEModelDownloaderParams_OC : NSObject {
    struct shared_ptr<TemplateConsumer::NLEModelDownloaderParams> { struct NLEModelDownloaderParams *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

- (void)setCommonParams:(id)a0;
- (struct shared_ptr<TemplateConsumer::NLEModelDownloaderParams> { struct NLEModelDownloaderParams *x0; struct __shared_weak_count *x1; })cppModel;
- (id)initWithCPPNode:(struct shared_ptr<TemplateConsumer::NLEModelDownloaderParams> { struct NLEModelDownloaderParams *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 effectSdkVersion:(id)a2 accessKey:(id)a3 platform:(id)a4 host:(id)a5 effectCacheDir:(id)a6 modelCacheDir:(id)a7 deviceId:(id)a8 deviceType:(id)a9;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 effectSdkVersion:(id)a2 accessKey:(id)a3 platform:(id)a4 effectHost:(id)a5 effectCacheDir:(id)a6 modelCacheDir:(id)a7 deviceId:(id)a8 deviceType:(id)a9 appLanguage:(id)a10 region:(id)a11 artistHost:(id)a12 artistCacheDir:(id)a13 imuseCacheDir:(id)a14 imuseHost:(id)a15 resolution:(id)a16 autoUnzip:(BOOL)a17 platformSDKVersion:(id)a18;
- (void)configMaterialParamsWithNetworkStatus:(id)a0 uid:(id)a1 mAccessKey:(id)a2 mAppId:(id)a3 mAppVersion:(id)a4 mAppName:(id)a5 isOnline:(BOOL)a6 mResourceTag:(id)a7 mResourceHost:(id)a8 mResourceCache:(id)a9;
- (void)addMusicParams:(id)a0 cacheDir:(id)a1 appID:(id)a2;
- (void)setLokiAppID:(id)a0;
- (void)setLokiAppVersion:(id)a0;
- (void).cxx_destruct;
- (void)setChannel:(id)a0;
- (id).cxx_construct;

@end
