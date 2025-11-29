@interface AWEMediaDownloadComposeStage : AWEMediaDownloadBaseStage

- (void)composeNowPost;
- (BOOL)shouldRun;
- (void)run;
- (void)cancel;

@end
