@class MemoryMappedKV, NSString;

@interface MMWebJsWAPkgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tryGetDebugPkgWithAppId:(id)a0;
+ (id)getValidMetaPkgWithAppId:(id)a0 builtInPkgPath:(id)a1;
+ (id)getPkgInfoWithAppId:(id)a0;
+ (id)getPkgInfoWithInfoData:(id)a0;
+ (id)getBuiltInBasePkgInfo:(id)a0;
+ (unsigned int)codePkgDownloadInterval;
+ (BOOL)isAppIdInWhiteList:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getCanvasCardBasicLibPkg;
- (id)getValidAppConfigPkgWithAppId:(id)a0 localResName:(id)a1;
- (id)getValidMetaPkgWithAppId:(id)a0 localResName:(id)a1;
- (void)trigerCanvasCardBasicLibPkg:(unsigned long long)a0;
- (void)trigerPreDownloadPkgWithUsername:(id)a0 appId:(id)a1 scene:(unsigned long long)a2;
- (void)prefetchGetCodeCmd:(id)a0 didFinishDownloadWithRet:(BOOL)a1 infoData:(id)a2 remainRetryCount:(unsigned long long)a3;
- (void)handlePrefetchGetPkg:(id)a0 filePath:(id)a1;
- (void)clearConfigKV;
- (id)lastUsablePkgWithAppId:(id)a0;
- (void)markDownloadPkgUsableWithInfoData:(id)a0;
- (BOOL)isCurrentPubLib:(id)a0 matchesWith:(id)a1;
- (BOOL)isPubLibUsable:(id)a0;
- (BOOL)isAppSupportFrameSet:(id)a0 appId:(id)a1 path:(id)a2;
- (BOOL)isAppSupportFrameSetWithRegexp:(id)a0 appId:(id)a1 path:(id)a2;
- (void).cxx_destruct;

@end
