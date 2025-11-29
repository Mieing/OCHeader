@interface AWEMediaDownloadConfirmDownloadStage : AWEMediaDownloadBaseStage

- (BOOL)needsConfirm;
- (void)confirmBeforeDownload;
- (void)showConfimAlert;
- (void)run;

@end
