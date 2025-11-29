@class NSRecursiveLock, NSString, NSMutableDictionary, WAPackageDownloadLogic, NSMutableSet, WAPackageInfoCacheLogic;

@interface WALocalCacheMgr : MMUserService <WAPackageDownloadLogicDelegate, MMServiceProtocol> {
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    NSMutableDictionary *_dicDownloadingUrlToDownloadInfo;
    NSMutableDictionary *_dicDownloadedTime;
    NSMutableSet *_setPackageChecksumVerified;
}

@property (retain, nonatomic) NSRecursiveLock *checksumVerifiedSetLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDebugInfoDataWithAppId:(id)a0 userName:(id)a1 appServiceType:(unsigned int)a2;
+ (id)getDefaultInfoDataWithAppId:(id)a0 userName:(id)a1 appServiceType:(unsigned int)a2;
+ (id)getDebugModuleInfoDataWithAppId:(id)a0 userName:(id)a1 moduleName:(id)a2 appServiceType:(unsigned int)a3;
+ (id)getModuleInfoDataWithAppId:(id)a0 userName:(id)a1 moduleName:(id)a2 appServiceType:(unsigned int)a3;
+ (void)setupInitializeInfoData:(id)a0 withAppId:(id)a1 userName:(id)a2;
+ (unsigned int)getPkgEncryptVersion:(id)a0;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)verifyLocalCacheChecksum:(id)a0;
- (void)reportPackageVerify:(id)a0 verifyType:(long long)a1 costTime:(unsigned long long)a2 fileSize:(unsigned long long)a3;
- (BOOL)hasLoadPkgInfoLocalCache:(id)a0;
- (void)unloadPkgLocalCacheIfDifferentPackageType:(id)a0;
- (BOOL)loadPkgInfoLocalCache:(id)a0;
- (BOOL)tryLoadReleasePkgInfoLocalCacheWithContact:(id)a0;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (BOOL)isDownloadingWithThisFullPkgDownloadURL:(id)a0 orFullPkgUrlWithZstd:(id)a1 orPatchUrl:(id)a2;
- (BOOL)isDownloadingWithInfoData:(id)a0;
- (BOOL)downloadAppPkgWithAppInfoData:(id)a0 fullPkgUrl:(id)a1 fullPkgUrlWithZstd:(id)a2 patchUrlStr:(id)a3 downloadScene:(unsigned long long)a4;
- (BOOL)downloadAppPkgWithAppInfoData:(id)a0 fullPkgUrl:(id)a1 fullPkgUrlWithZstd:(id)a2 patchUrlStr:(id)a3 downloadScene:(unsigned long long)a4 enableDownloadResumption:(BOOL)a5;
- (void)cancelDownLoadAppPkgWithAppInfoData:(id)a0;
- (void)downloadAppPkgWithDownloadInfo:(id)a0 realDownloadUrl:(id)a1 downloadScene:(unsigned long long)a2;
- (void)onDownloadTaskProgress:(float)a0 remainingTime:(unsigned long long)a1 totalLength:(unsigned long long)a2 taskUrl:(id)a3;
- (void)onDownloadTaskCompletion:(long long)a0 taskUrl:(id)a1 filePath:(id)a2 protocolInfo:(id)a3 totalLength:(unsigned long long)a4;
- (void)subThread_onDownloadSuccessWithDownloadInfo:(id)a0 errorType:(long long)a1 taskUrl:(id)a2 filePath:(id)a3 protocolInfo:(id)a4 totalLength:(unsigned long long)a5;
- (void)onDownloadTaskRecordTime:(double)a0 appId:(id)a1;
- (void)notifyOnCompleteExtension:(BOOL)a0 errorCode:(unsigned int)a1 errorMsg:(id)a2 pkgUrl:(id)a3 moduleName:(id)a4 usePatch:(BOOL)a5 protocolInfo:(id)a6;
- (void)innerNotifyOnCompleteExtension:(BOOL)a0 errorCode:(unsigned int)a1 errorMsg:(id)a2 pkgUrl:(id)a3 moduleName:(id)a4 usePatch:(BOOL)a5 protocolInfo:(id)a6;
- (void)reportDownloadResult:(BOOL)a0 errCode:(unsigned int)a1 forDownloadInfo:(id)a2 withDetailInfo:(id)a3;
- (void)reportDownloadDetailForDownloadInfo:(id)a0 withDetailInfo:(id)a1 errCode:(unsigned int)a2;
- (void)onUpdateDataRecordWhenGetValidPkg:(id)a0;
- (BOOL)updateWeAppInfoData:(id)a0;
- (BOOL)isNeedDownloadDebugModePkg:(id)a0;
- (unsigned long long)getPackageTypeByNotifyInfo:(id)a0 appServiceType:(unsigned int)a1;
- (BOOL)isNeedDownloadDebugModePkgWithDebugInfo:(id)a0 appServiceType:(unsigned int)a1;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)a0;
- (id)getCacheFileInfoWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0 prefix:(id)a1 suffix:(id)a2;
- (unsigned long long)getCacheFileSizeWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0 offset:(unsigned int)a1 length:(unsigned int)a2 error:(id *)a3;
- (id)getLocalCacheDataWithFullUrl:(id)a0 offset:(unsigned int)a1 length:(unsigned int)a2 error:(id *)a3 prefix:(id)a4 suffix:(id)a5;
- (id)getLocalCacheDataWithBaseUrl:(id)a0 relativeUrl:(id)a1;
- (double)getDownloadTime:(id)a0;
- (void)setDownloadInfo:(id)a0 withUrl:(id)a1;
- (id)getDownloadInfoWithUrl:(id)a0;
- (id)allDownloadInfo;
- (void)removeDownloadInfoWithUrl:(id)a0;
- (id)contentsOfDirectoryWithFullUrl:(id)a0 error:(id *)a1;
- (struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })statWithFullUrl:(id)a0 error:(id *)a1;
- (id)getFileInfoWithFullUrl:(id)a0 digestAlgorithm:(id)a1 error:(id *)a2 errNo:(unsigned int *)a3;
- (void)executeIssueDecryptCmd:(id)a0;
- (id)decompressZstdPkg:(id)a0;
- (BOOL)evaluateEncryptFile:(id)a0 sourceUrl:(id)a1 context:(id)a2;
- (id)batchEvaluateEncryptFile:(id)a0 context:(id)a1;
- (unsigned int)getDownloadingPrefetchTaskCount;
- (id)getDownloadingPrefetchTaskSpeed;
- (double)getDownloadingPrefetchTaskSpeedWithUrl:(id)a0;
- (BOOL)overwriteTargetInfoDataPkg:(id)a0 bySourceInfoData:(id)a1;
- (BOOL)isPkgFileExistsForInfoData:(id)a0;
- (unsigned long long)transferDownloadTypeToReportType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
