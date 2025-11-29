@class NSMutableArray;

@interface BDPNativeGameLoadInstance : BDPBaseLoadInstance

@property (nonatomic) BOOL hasUpdate;
@property (nonatomic) BOOL enableUseHighPerformance;
@property (nonatomic) BOOL enableUseHighPerformancePlus;
@property (retain, nonatomic) NSMutableArray *gameStutterInfo;

+ (void)bootstrapLaunch;
+ (id)validateMeta:(id)a0;
+ (id)setupCustomMetaRequesterInfo:(id)a0;
+ (BOOL)shouldDownloadPkg:(id)a0;
+ (long long)type;

- (id)businessParamForEvent:(id)a0;
- (unsigned long long)checkModelStatus:(id)a0 reader:(id)a1;
- (void)commonAndTaskSetupDone:(BOOL)a0;
- (void)becomeReadyStatus;
- (void)firstFrameDidShow;
- (BOOL)canApplyUpdate;
- (void)loadInstanceDidCreated:(BOOL)a0;
- (void)readyToLoadAppWithModel:(id)a0;
- (void)workBeforeClose:(id)a0;
- (void)updateCommonModel:(id)a0 withNewestModel:(id)a1;
- (void)checkForUpdateReadyWithResult:(BOOL)a0;
- (void)pkgDownloadCompletion:(id)a0 model:(id)a1;
- (void)getUpdatedPkgCompletion:(id)a0 model:(id)a1;
- (void)md5Invalid;
- (void)firstFrameDidShowWithExtraParams:(id)a0;
- (long long)getToolbarThemeStyleWithDefaultStyle:(long long)a0;
- (id)setupCommonAndTaskWithModel:(id)a0 appConfigData:(id)a1;
- (void)afterColdBootDoneWithConfigDic:(id)a0 model:(id)a1;
- (void)appStartLoadingFilesWithModel:(id)a0;
- (void)checkPerformanceMode:(id)a0;
- (void)checkValidForMixWebgl:(id *)a0;
- (void)pr_trackerDomReadyEventWithParams:(id)a0;
- (void)updateModelExtensionIfNeed;
- (void)p_showFailedAlertWithTitle:(id)a0 message:(id)a1 closeReason:(id)a2;
- (void).cxx_destruct;

@end
