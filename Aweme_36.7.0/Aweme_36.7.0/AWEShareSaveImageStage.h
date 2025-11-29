@interface AWEShareSaveImageStage : AWEShareBaseStage

- (void)trackQRCodeSaveEventIfNeeded;
- (void)showRedirectAlert;
- (void)openDestinationApp;
- (BOOL)shouldRun;
- (void)run;

@end
