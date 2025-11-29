@class NSString;

@interface AWELifeCycleCustomImpl : NSObject <BDPLifeCyclePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_visitAppWithAppSchema:(id)a0;

- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)_exitUploadUsingInfo:(id)a0;
- (void)_setNoticeFlag;
- (void)_reportVisitAppWithSchemaIfNeed:(id)a0 launchParam:(id)a1 sourceType:(unsigned long long)a2 bootType:(unsigned long long)a3;
- (long long)_getReportLaunchDuration:(id)a0;
- (BOOL)shouldOpenDebugAppWithLaunchParam:(id)a0 isGame:(BOOL)a1;
- (BOOL)canShowUIWithV3Configuration:(id)a0 schema:(id)a1;
- (id)configurationWithTheme:(id)a0 config:(id)a1;
- (BOOL)canShowUIWithConfiguration:(id)a0 schema:(id)a1;
- (BOOL)isLiveCustomWithUniqueID:(id)a0;
- (id)_getExitUploadParams:(id)a0;
- (BOOL)shouldOpenWithLaunchParam:(id)a0 openBlk:(id /* block */)a1;
- (BOOL)hg_shouldOpenWithLaunchParam:(id)a0 openBlk:(id /* block */)a1;
- (void)metaSuccessWithUniqueID:(id)a0 model:(id)a1;
- (void)pkgDownloadFinishWithUniqueID:(id)a0;
- (void)pkgDownloadProgress:(float)a0 uniqueID:(id)a1;
- (void)loadFinishWithUniqueID:(id)a0 error:(id)a1 logParam:(id)a2;
- (void)firstFrameDidShow:(id)a0;
- (void)warmBootDoneWithUniqueID:(id)a0;
- (void)viewDidLoad:(id)a0 baseVC:(id)a1 launchParam:(id)a2;
- (void)workBeforeCloseWithUniqueID:(id)a0;
- (void)exitWithUniqueID:(id)a0;
- (void)enterForegroundWithUniqueID:(id)a0;
- (void)enterBackgroundWithUniqueID:(id)a0;
- (void)feedGameLaunchWithUniqueID:(id)a0;

@end
