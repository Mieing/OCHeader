@class AWEMediaDownloadOptions, AWEMediaDownloadResultItem;

@interface AWEShareAwemeDownloadStage : AWEShareBaseStage

@property (retain, nonatomic) AWEMediaDownloadOptions *downloadOptions;
@property (retain, nonatomic) AWEMediaDownloadResultItem *downloadResult;

- (void)trackDownloadEvent;
- (void)showDownloadFailedToast;
- (BOOL)checkShouldRun;
- (void)startDownloading;
- (void)finishWithDownloadResult:(id)a0;
- (void)updateModelAfterDownload;
- (BOOL)prepareBeforeRun;
- (void).cxx_destruct;
- (BOOL)shouldRun;
- (void)run;

@end
