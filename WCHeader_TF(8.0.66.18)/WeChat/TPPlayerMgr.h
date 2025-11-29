@class NSString;

@interface TPPlayerMgr : NSObject <TPThumbPlayerLogDelegate>

@property (nonatomic) BOOL initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)initSDKWithGuid:(id)a0 platform:(long long)a1;
- (void)setLogDelegate:(id)a0;
- (void)setProxyServiceType:(long long)a0;
- (void)setProxyEnable:(BOOL)a0;
- (void)setProxyMaxStorageSizeMB:(long long)a0;
- (void)setProxyConfigWithPlatform:(long long)a0 cacheDir:(id)a1 dataDir:(id)a2 configStr:(id)a3;
- (void)setProxyConfigWithEnableCheckLocalServer:(BOOL)a0 enableCheckLocalServerOnCreate:(BOOL)a1 timeoutMs:(int)a2 serverCheckTimeInterval:(int)a3;
- (void)setUserInfoWithUin:(id)a0 isVip:(BOOL)a1;
- (void)setUpcInfoWithUpc:(id)a0 upcState:(long long)a1;
- (void)setAppInfoWithAppVersion:(id)a0 buildVerson:(id)a1;
- (void)setOutNetIP:(id)a0;
- (id)downloadProxyVersion;
- (id)thumbPlayerVersion;
- (id)playerCoreVersion;
- (id)getOfflineRecordVinfo:(id)a0 format:(id)a1;
- (long long)getOfflineRecordDurationMs:(id)a0 format:(id)a1;
- (long long)getSuggestedBitrate;
- (long long)getCellularDataCost;
- (void)setPropertyBool:(unsigned long long)a0 propertyValue:(BOOL)a1;
- (BOOL)getPropertyBool:(unsigned long long)a0;
- (void)setPropertyString:(unsigned long long)a0 propertyValue:(id)a1;
- (id)getPropertyString:(unsigned long long)a0;
- (void)setProxyConfigWithServiceType:(int)a0 cacheDir:(id)a1 dataDir:(id)a2;
- (void)setProxyMaxStorageSizeMBWithServiceType:(int)a0 maxStorageSizeMB:(long long)a1;
- (void)setProxyVodCachedEnableWithServiceType:(int)a0 vodCachedEnable:(BOOL)a1;
- (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)a0;
- (void)logWithLevel:(long long)a0 tag:(id)a1 content:(id)a2;

@end
