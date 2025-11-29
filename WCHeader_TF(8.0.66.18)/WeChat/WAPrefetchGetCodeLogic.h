@class NSString, NSMutableArray, NSMutableDictionary;

@interface WAPrefetchGetCodeLogic : MMObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt, CNetworkStatusExt>

@property (retain, nonatomic) NSMutableArray *arrRequestingCmd;
@property (retain, nonatomic) NSMutableArray *arrWaitingCmd;
@property (retain, nonatomic) NSMutableDictionary *dicDownloadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)enableDownloadResumptionForKey:(id)a0;
- (BOOL)isEnableDownloadResumptionForKey:(id)a0;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)resumeLocalData;
- (BOOL)executeGetCodeCmd:(id)a0;
- (void)startGetCodeWithCmd:(id)a0;
- (BOOL)enqueueCheck:(id)a0;
- (void)elimilateCmdFromWaitingQueueWhichPkgVersionLowerThanTargetCmd:(id)a0;
- (unsigned long long)checkLocalVersion:(id)a0;
- (void)addCmdIntoRequestingQueue:(id)a0;
- (void)addCmdIntoWaitingQueue:(id)a0;
- (id)getRequestingCmdForAppInfoData:(id)a0;
- (unsigned int)getNetworkType;
- (BOOL)checkCurrentNetworkValidForCmd:(id)a0;
- (BOOL)isNetworkTypeBetter4G:(unsigned int)a0;
- (BOOL)isNetworkTypeBetter3G:(unsigned int)a0;
- (BOOL)isNetworkTypeBetter2G:(unsigned int)a0;
- (BOOL)isAppInfoDataInDownloadingCode:(id)a0;
- (void)cancelDownloadForScene:(unsigned int)a0;
- (void)cancelPreDownLoadAppPkgForRequestKey:(id)a0 scene:(unsigned int)a1;
- (id)getDownloadSpeedArrayForScene:(unsigned int)a0;
- (id)getDownloadSpeedForRequestKey:(id)a0 scene:(unsigned int)a1;
- (void)removeDownloadingCmdForInfoData:(id)a0;
- (void)removeDownloadingCmd:(id)a0;
- (void)removeWaitingCmd:(id)a0;
- (void)removeCmd:(id)a0;
- (void)saveLocalData;
- (void)checkWaitingQueue;
- (id)getPrefetchId;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)a0 zstdUrl:(id)a1 patchUrl:(id)a2 forInfoData:(id)a3;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)a0 forInfoData:(id)a1;
- (BOOL)startDownloadPkgWithAppInfoData:(id)a0 CDNURL:(id)a1 CDNURLWithZstd:(id)a2 patchURL:(id)a3;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;
- (BOOL)isCmdReachMaxRetryCount:(id)a0;
- (void)markRequestDidFailedCmd:(id)a0 infoData:(id)a1;
- (void).cxx_destruct;

@end
