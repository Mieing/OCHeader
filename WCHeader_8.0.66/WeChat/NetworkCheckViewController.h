@class MMTimer, UIImageView, NSString, UILabel, UIButton;

@interface NetworkCheckViewController : MMWindowViewController <ILocationMgrExt> {
    UIButton *m_cancelBtn;
    UIImageView *m_iconView;
    UILabel *m_statusLabel;
    UILabel *m_detailLabel;
    UIButton *m_confirmBtn;
    MMTimer *m_progressTimer;
    int m_progressCounter;
    int m_progress;
    int m_progressStep;
    unsigned long long m_locationTag;
    BOOL m_connetOK;
    BOOL m_baseNetOK;
    BOOL m_longlinkOK;
    NSString *m_kvString;
}

- (void)viewDidLoad;
- (void)updateProgress;
- (int)getCheckingProgress;
- (void)onNetworkCheckFinished:(BOOL)a0 baseNetOK:(BOOL)a1 longLinkOK:(BOOL)a2 kvString:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateForNetworkOK;
- (void)updateForNetworkFail;
- (void)updateForSubmitInfoWithLocation:(id)a0;
- (void)updateViewWithStatus:(id)a0 detail:(id)a1 hasConfirmBtn:(BOOL)a2;
- (void)onConfirmBtnClicked;
- (void)onCancelBtnClicked;
- (void)onGPSLocationChanged:(id)a0 withTag:(unsigned long long)a1;
- (void)onGPSLocationError:(int)a0 withTag:(unsigned long long)a1;
- (void).cxx_destruct;

@end
