@class NSString;
@protocol DVEffectDownloadDelegate;

@interface DVEffectManager : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *effectSdkVersion;
@property (copy, nonatomic) NSString *epSdkVersion;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *effectCacheDir;
@property (copy, nonatomic) NSString *modelCacheDir;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *appLanguage;
@property (copy, nonatomic) NSString *artistHost;
@property (copy, nonatomic) NSString *artistCacheDir;
@property (copy, nonatomic) NSString *imuseCacheDir;
@property (copy, nonatomic) NSString *imuseHost;
@property (retain, nonatomic) id<DVEffectDownloadDelegate> effectDelegate;
@property (nonatomic) long long thirdPartyResourceFinderReferenceCount;

+ (void)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 progress:(id *)a6 callback:(id /* block */)a7;
+ (id)nleDownloader;
+ (void)setup:(id)a0 channel:(id)a1 region:(id)a2 domain:(id)a3 artistDomain:(id)a4 imuseDomain:(id)a5 language:(id)a6 deviceID:(id)a7 devicePlatform:(id)a8 deviceType:(id)a9 appID:(id)a10 effectCacheDraftFolder:(id)a11 isAbroad:(BOOL)a12;
+ (void)increaseThirdPartyResourceFinderReferenceCount;
+ (void)decreaseThirdPartyResourceFinderReferenceCount;
+ (void)clearDavinciEffectCache;
+ (void)setup:(id)a0 channel:(id)a1 region:(id)a2 domain:(id)a3 artistDomain:(id)a4 imuseDomain:(id)a5 language:(id)a6 deviceID:(id)a7 devicePlatform:(id)a8 deviceType:(id)a9 appID:(id)a10 effectCacheDraftFolder:(id)a11 isAbroad:(BOOL)a12 useVideoCutParamsForLoki:(BOOL)a13;
+ (id)p_commonFolderPath;
+ (id)p_cacheEffect:(long long)a0 InFolder:(id)a1;
+ (id)newNLEDownloaderInstance;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
