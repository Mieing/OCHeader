@class NSString, UIButton, MMLoadingView;

@interface MMMSReportViewController : MMMSBaseViewController <MemoryStatManagerExt> {
    UIButton *m_uploadButton;
    UIButton *m_nextButton;
    MMLoadingView *m_loadingViewX;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)layoutViews;
- (void)layoutUploadButtonAndTips:(int *)a0;
- (void)layoutNextButton:(int *)a0;
- (void)startLoadingBlocked;
- (void)startLoadingBlockedWithText:(id)a0;
- (void)stopLoading;
- (void)onUploadButtonClicked:(id)a0;
- (void)onNextButtonClicked:(id)a0;
- (void)onMemoryRecordUploadCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
