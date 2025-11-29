@interface BDPInteractGameLoadInstance : BDPBaseLoadInstance

+ (void)bootstrapLaunch;
+ (id)validateMeta:(id)a0;
+ (id)setupCustomMetaRequesterInfo:(id)a0;
+ (BOOL)shouldDownloadPkg:(id)a0;
+ (long long)type;

- (id)businessParamForEvent:(id)a0;
- (void)commonAndTaskSetupDone:(BOOL)a0;
- (void)becomeReadyStatus;
- (void)firstFrameDidShow;
- (BOOL)canApplyUpdate;
- (void)loadInstanceDidCreated:(BOOL)a0;
- (void)readyToLoadAppWithModel:(id)a0;
- (void)workBeforeClose:(id)a0;
- (void)pkgDownloadCompletion:(id)a0 model:(id)a1;
- (void)getUpdatedPkgCompletion:(id)a0 model:(id)a1;
- (void)md5Invalid;
- (void)subViewFirstFrameDidShow;
- (id)setupCommonAndTaskWithModel:(id)a0 appConfigData:(id)a1;
- (void)finishLoadContent:(id)a0;
- (void)afterColdBootDoneWithConfigDic:(id)a0 model:(id)a1;
- (void)dealloc;

@end
