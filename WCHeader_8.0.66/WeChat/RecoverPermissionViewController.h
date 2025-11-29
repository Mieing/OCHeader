@class UILabel, MMActivityIndicator, UIButton;

@interface RecoverPermissionViewController : MMUIViewController {
    int m_percent;
    MMActivityIndicator *m_loadingView;
    UILabel *m_loadingTip;
    UIButton *m_goBackButton;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)startFakeLoadingToProgress:(int)a0;
- (void)updateProgress:(unsigned int)a0;
- (void)resetProtectionOnPath:(const char *)a0;
- (void)resetProtectionOnFile:(const char *)a0;
- (void)onGoBackButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
