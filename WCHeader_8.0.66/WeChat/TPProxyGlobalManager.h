@class TPLock, NSMutableDictionary, NSString;

@interface TPProxyGlobalManager : NSObject <TPDLProxyLogDelegate, TPNetworkReachabilityDelegate>

@property (retain, nonatomic) NSMutableDictionary *proxyMaps;
@property (retain, nonatomic) NSMutableDictionary *proxyInitErrorCodeMap;
@property (retain, nonatomic) TPLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)getPlayerProxyWithServiceType:(long long)a0;
- (void)updateUserUpc:(id)a0 userUpcState:(long long)a1;
- (void)updateUserUin:(id)a0 isVip:(BOOL)a1;
- (void)updateAppVersion:(id)a0 buildVerson:(id)a1;
- (int)getProxyInitErrorCodeWithServiceType:(long long)a0;
- (void)updateMaxStorageSizeMB:(long long)a0;
- (void)updateMaxStorageSizeMBWithServiceType:(int)a0 maxStorageSizeMB:(long long)a1;
- (void)updateMaxUseMemoryMB:(long long)a0;
- (void)updateMaxUseMemoryMBWithServiceType:(int)a0 maxUseMemoryMB:(long long)a1;
- (void)updateVodCachedEnable:(BOOL)a0;
- (void)updateVodCachedEnableWithServiceType:(int)a0 vodCacheEnable:(BOOL)a1;
- (void)updateDataReportEnable:(BOOL)a0;
- (void)updateDataReportEnableWithServiceType:(int)a0 dataReportEnable:(BOOL)a1;
- (void)setNetworkReachState:(long long)a0 toProxy:(id)a1;
- (void)onNetworkReachStateChanged:(long long)a0;
- (void)logInfo:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logWarn:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logError:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void)logDebug:(id)a0 line:(int)a1 tag:(id)a2 msg:(id)a3;
- (void).cxx_destruct;

@end
