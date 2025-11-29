@class NSString, BDPStarkCoreInfo;

@interface BDPStarkCoreHelper : NSObject <BDPBusinessUpdateHandlerProtocol>

@property (retain, nonatomic) BDPStarkCoreInfo *scCoreInfo;
@property (retain, nonatomic) NSString *nativeEntry;
@property (copy, nonatomic) NSString *curRouteId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)shareManager;
+ (void)updateRelativeDataIfNeed;
+ (BOOL)enable;

- (float)combineLoadingViewUnityHintTextPercent:(id)a0;
- (id)combineLoadingViewUnityHintText:(id)a0;
- (BOOL)enableNativeVConsole:(id)a0;
- (id)getSCCoreInfoFromSettings:(id)a0;
- (id)getSCCoreInfoFromLocalFile:(BOOL)a0;
- (BOOL)unzipSCCoreFile:(id)a0;
- (BOOL)writeSCCoreInfoToLocalFile:(id)a0 isV2:(BOOL)a1;
- (BOOL)isHighPerformancePlusEnabled:(id)a0 appID:(id)a1;
- (BOOL)checkCanUseHighPerformancePlus:(id)a0 appID:(id)a1;
- (id)getLaunchFromLocationBlacklistForHpp:(id)a0;
- (BOOL)checkCanUseHighPerformancePlusForFeed:(id)a0 appID:(id)a1;
- (id)getSCCoreDir;
- (id)getSCCoreMetaPath;
- (BOOL)unzipFile:(id)a0 targetDir:(id)a1;
- (BOOL)isUseTmg:(id)a0;
- (void)updateStarkCoreV2IfNeed:(id)a0 appID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isHighPerformancePlusModeEnabled:(id)a0;
- (BOOL)useHighPerformancePlus:(id)a0;
- (id)hppLaunchFromLocationBlacklist:(id)a0;
- (BOOL)feedUseHighPerformancePlus:(id)a0;
- (BOOL)enableNativeLog:(id)a0;
- (unsigned long long)XHRNativeBufferSize:(id)a0;
- (void)updateStarkCoreIfNeed:(id)a0 appID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isBrowserEnable;
- (id)getSCCoreEntryPath;
- (id)getNativeEntryPath;
- (id)getLocalSCCoreURL;
- (BOOL)enablePreloadForLocalSCCore;
- (BOOL)enablePredefineForLocalSCCore;
- (BOOL)enableFPBackup;
- (BOOL)shouldShowTipsInBackground;
- (long long)warningCountToShutDownInBackground;
- (void)setCurrentRouteId:(id)a0;
- (id)getCurrentRouteId;
- (BOOL)enableCombineLoadingView:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEnabled:(id)a0;
- (void)reset;

@end
