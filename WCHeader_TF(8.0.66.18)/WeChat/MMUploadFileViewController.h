@class MMDeleteFileModel, NSString, NSArray, MMProgressView, UITapGestureRecognizer, UIImageView, MMLoadingView, UIButton, UILabel;

@interface MMUploadFileViewController : MMUIViewController <MMResourceMgrExt, ILogReportExt, MMPackageDownloadMgrExt> {
    NSArray *_uploadFileNames;
    NSString *_attachDataName;
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    UIImageView *m_recoverView;
    UILabel *m_noneFile;
    UILabel *m_tips;
    UILabel *m_uploadFileName;
    UIButton *m_uploadBtn;
    UILabel *m_warningLabel;
    UITapGestureRecognizer *_tap;
    unsigned long long m_scene;
    MMDeleteFileModel *m_model;
    NSString *m_zipPath;
}

@property (retain, nonatomic) MMLoadingView *loadingView;
@property (nonatomic) BOOL isUploading;

- (id)initWithScene:(unsigned long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)layoutSubViews;
- (void)initView;
- (void)adjustTableViewRect;
- (void)onBtnClick:(id)a0;
- (void)sendMail:(id)a0 andRtxName:(id)a1;
- (void)clearFile;
- (void)hiddenUpView;
- (void)setProgress:(id)a0;
- (void)setUploadFail;
- (void)setUploadSuc;
- (void)onFinish;
- (void)OnResponse:(id)a0;
- (void)UploadFail;
- (void)UploadSuccess;
- (void)removeZipFile;
- (void)didTap;
- (void)onPackageListUpdated:(id)a0;
- (void)downloadPackage:(id)a0;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void).cxx_destruct;

@end
