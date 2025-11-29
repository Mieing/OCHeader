@class NSString, UIProgressView;

@interface MMSMClearDataViewController : MMSMBaseViewController <MMSafeModeMgrExt> {
    int m_percent;
    UIProgressView *m_progressView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)layoutViewsBeforeClear;
- (void)layoutViewsForClearing;
- (void)layoutViewsAfterClear;
- (void)onClearButtonClicked:(id)a0;
- (void)onCancelButtonClicked:(id)a0;
- (void)onExitButtonClicked:(id)a0;
- (void)startFakeLoadingToProgress:(int)a0;
- (void)updateProgress:(unsigned int)a0;
- (void)onClearUnnecessaryFilesFinished;
- (void).cxx_destruct;

@end
