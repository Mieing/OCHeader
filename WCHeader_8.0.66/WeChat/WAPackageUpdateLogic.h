@class NSString, NSMutableArray;

@interface WAPackageUpdateLogic : NSObject <WAPackageDownloadUrlFetcherExtension, IWALocalCacheMgrExt>

@property (retain, nonatomic) NSMutableArray *arrRequestingAppInfoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)isAppInfoDataInRequesting:(id)a0;
- (id)getRequestingInfoDataForAppInfoData:(id)a0;
- (void)removeRequestingAppInfoData:(id)a0;
- (void)tryUpdatePackageWithAppInfoData:(id)a0;
- (void)onPackageDownloadUrlFetchSuccessWithDownloadUrl:(id)a0 zstdUrl:(id)a1 patchUrl:(id)a2 forInfoData:(id)a3;
- (void)onPackageDownloadUrlFetchFailWithErrCode:(long long)a0 forInfoData:(id)a1;
- (BOOL)startDownloadPkgWithAppInfoData:(id)a0 CDNURL:(id)a1 CDNURLWithZstd:(id)a2 patchURL:(id)a3;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;
- (void).cxx_destruct;

@end
