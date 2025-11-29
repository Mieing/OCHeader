@class TPLock, NSMutableDictionary;

@interface TPProxyConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *configs;
@property (retain, nonatomic) TPLock *lock;
@property BOOL proxyEnable;
@property (nonatomic) long long defaultServiceType;

+ (id)sharedInstance;

- (id)init;
- (id)proxyConfigWithServiceType:(int)a0;
- (void)addProxyConfigWithServiceType:(int)a0 cacheDir:(id)a1 dataDir:(id)a2;
- (void)addProxyConfig:(id)a0;
- (void)setMaxUseMemoryMB:(long long)a0;
- (void)setMaxUseMemoryMBWithServiceType:(int)a0 maxUseMemoryMB:(long long)a1;
- (void)setMaxUseStorageMB:(long long)a0;
- (void)setMaxUseStorageMBWithServiceType:(int)a0 maxUseStorageMB:(long long)a1;
- (void)setVodCachedEnable:(BOOL)a0;
- (void)setVodCacheEnableWithServiceType:(int)a0 vodCachedEnable:(BOOL)a1;
- (void)setReportEnable:(BOOL)a0;
- (void)setReportEnableWithServiceType:(int)a0 reportEnable:(BOOL)a1;
- (void)setIniConfigWithServiceType:(int)a0 iniConfig:(id)a1;
- (id)dlInitParamWithServiceType:(int)a0;
- (id)serviceConfigWithServiceType:(int)a0;
- (void)addServiceConfig:(id)a0;
- (void).cxx_destruct;

@end
