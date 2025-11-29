@class AWEMediaDownloadLoadingView, AWEUILoadingView;

@interface AWEMediaDownloadCommonTask : AWEMediaDownloadTask

@property (retain, nonatomic) AWEMediaDownloadLoadingView *loadingView;
@property (retain, nonatomic) AWEUILoadingView *afdLoadingView;

+ (id)taskWithModel:(id)a0 options:(id)a1;

- (void)downloadStageWillRun:(id)a0;
- (void)downloadStage:(id)a0 didFinishWithResult:(unsigned long long)a1 error:(id)a2;
- (void)updateErrorMessageWithResult:(long long)a0 error:(id)a1;
- (void)tapticWithResult:(long long)a0;
- (void)setupStagesWithType:(unsigned long long)a0;
- (void)setupLoadingView;
- (void)handleProgressChange:(double)a0;
- (void)showToastStartDownloadAdsVideo;
- (void)trackDownloadPopupShow;
- (void)trackDownloadStartTime;
- (void)trackDownloadWaringPopupShow;
- (void)trackDownloadEndTimeWithStageResult:(unsigned long long)a0 error:(id)a1;
- (void)trackFinishDownloadWithError:(id)a0;
- (void)trackNeedWaterMarkAfterDownload;
- (void)trackDownloadNoWatermarkWithError:(id)a0;
- (void)trackFinishWaterMarkWithError:(id)a0;
- (void)trackDownloadWarningPopupContinue;
- (void)trackDownloadWaringPopupCancel;
- (void)_trackDownloadWarningBuilder:(id)a0;
- (void)trackTaskDoneWithItem:(id)a0;
- (void)trackTaskFailWithItem:(id)a0 error:(id)a1;
- (void)trackTaskCancelWithItem:(id)a0 isDownloading:(BOOL)a1;
- (void)trackFinishDownloadWithStatus:(unsigned long long)a0 error:(id)a1;
- (void)trackStageWillRun:(id)a0;
- (void)trackStageFinish:(id)a0 stageResult:(unsigned long long)a1 error:(id)a2;
- (void)_trackMuteDownloadWarningBuilder:(id)a0;
- (void)trackDownloadFailBannerShow;
- (void)trackTaskFinishWithItem:(id)a0 result:(long long)a1 error:(id)a2;
- (void)insertStage:(id)a0 beforeStage:(Class)a1;
- (void)insertStage:(id)a0 afterStage:(Class)a1;
- (BOOL)p_isCloseFriendsShare;
- (void).cxx_destruct;
- (void)finishWithResult:(long long)a0 error:(id)a1;
- (id)initWithOptions:(id)a0;

@end
