@class NSString, UIProgressView;

@interface MMSMUploadFileViewController : MMSMBaseViewController <MMSafeModeMgrExt> {
    int m_percent;
    UIProgressView *m_progressView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)layoutViewsBeforeUpload;
- (void)layoutViewsForUploading;
- (void)layoutViewsAfterUploading;
- (void)setProgress:(unsigned int)a0;
- (void)updateProgress:(unsigned int)a0;
- (void)onUploadButtonClicked:(id)a0;
- (void)onNextButtonClicked:(id)a0;
- (void)onCancelButtonClicked:(id)a0;
- (void)onUploadFilesProgress:(double)a0;
- (void)onUploadFilesFinished;
- (void)onUploadFilesFail;
- (void)onFinishButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
