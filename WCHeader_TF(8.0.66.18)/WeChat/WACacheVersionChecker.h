@class NSString, WAInfoData, WACacheVersionPreChecker, WACacheVersionCheckerContext, NSMutableArray, WAPackageConfig;

@interface WACacheVersionChecker : NSObject <IWALocalCacheMgrExt> {
    unsigned long long _checkScene;
    BOOL _isCancelled;
    id /* block */ _completeHandler;
    id /* block */ _progressHandler;
    NSMutableArray *_arrNeedDownloadInfoDatas;
    NSMutableArray *_arrDownloadInfoData;
    WAPackageConfig *_packageConfig;
    NSString *_relativePath;
    WACacheVersionPreChecker *_preChecker;
    unsigned long long _startDownloadTime;
    BOOL _isDownloadStart;
    BOOL _hasReported;
}

@property (nonatomic) unsigned long long updatePackageStartTime;
@property (retain, nonatomic) WAInfoData *appInfoData;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned int debugType;
@property (retain, nonatomic) WACacheVersionCheckerContext *checkerContext;
@property (copy, nonatomic) NSString *instanceId;

+ (id)getErrMsgFromErrorCode:(long long)a0 debugType:(unsigned long long)a1;
+ (void)checkCacheReadyWithAppid:(id)a0 debugModeType:(unsigned int)a1 checkerContext:(id)a2 completeHandler:(id /* block */)a3 progressHandler:(id /* block */)a4;

- (id)initWithAppID:(id)a0 debugType:(unsigned int)a1;
- (void)checkCacheReadyWithCheckerContext:(id)a0 completeHandler:(id /* block */)a1 progressHandler:(id /* block */)a2;
- (void)triggerParallelDownloadWithCheckerContext:(id)a0 completeHandler:(id /* block */)a1;
- (void)cancel;
- (BOOL)copyInsteadDownloadForInfoDataThatAlreadyDownloadedSameCheckSum:(id)a0;
- (void)downloadInfoDatas:(id)a0;
- (void)triggerPkgDownloadWithAppInfoDataList:(id)a0;
- (BOOL)tryTriggerDownloadFromParallelCacheForInfoData:(id)a0;
- (BOOL)isMatchInfoData:(id)a0 andResponseItem:(id)a1;
- (void)reportResponse:(id)a0;
- (void)handleGetPkgDownloadUrl:(id)a0;
- (void)updateDebugModeNotifyInfoIfNeeded:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (BOOL)startDownloadPkgWithAppInfoData:(id)a0 CDNURL:(id)a1 CDNURLWithZstd:(id)a2 patchURL:(id)a3;
- (void)addDownloadInfoData:(id)a0;
- (unsigned long long)downloadInfoDataCount;
- (BOOL)hasDownloadInfoData:(id)a0;
- (void)removeDownloadInfoData:(id)a0;
- (void)callCompletionHandlerWithSuccess:(BOOL)a0 errorCode:(long long)a1;
- (void)reportCheckResult:(BOOL)a0 errorCode:(long long)a1;
- (void)onUpdateAppPkgProgress:(float)a0 remainingTime:(unsigned long long)a1 totalLength:(unsigned long long)a2 withAppInfoData:(id)a3;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;
- (void)reportParallelFailFallBack:(id)a0;
- (void)reportIntallOrUpdateInfo:(BOOL)a0 errorCode:(unsigned int)a1;
- (void)reportPluginCodesDownloadIDKey:(BOOL)a0 packageType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
