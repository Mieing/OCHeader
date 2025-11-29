@class NSString, MMUIActivityIndicatorView, UIImageView, UILabel, UIImage, MMUILabel;

@interface WXGMigrationServerViewController : MMUIViewController <IChatMigrationServerExt, CNetworkStatusExt, IChatLogDataMgrExt> {
    UIImageView *m_qrCodeImageView;
    UILabel *m_qrCodeTipLabel;
    MMUIActivityIndicatorView *m_qrCodeLoadingView;
    UIImage *m_qrcodeImage;
    int m_retryGetQRCodeTimes;
}

@property (retain, nonatomic) MMUIActivityIndicatorView *dataLoadingIndicator;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) MMUILabel *loadingLabel;
@property (nonatomic) BOOL isMigrationAllAndNeedWaitLoad;
@property (nonatomic) BOOL isSessionDataLoadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)refreshView;
- (void)registerLoadSessionExtension;
- (void)onPressLeftNavigationButton;
- (void)p_makeQRCodeState;
- (void)p_makeQRCodeLoadingState;
- (void)p_makeQRCodeImageFinishState:(id)a0 withText:(id)a1;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_setQRCodeTipLabelWithText:(id)a0;
- (void)loadSessionArrayFinishAndShowQRCode;
- (void)p_makeLoadingDataState;
- (void)p_removeLoadingDataState;
- (void)resetLoadingTip:(id)a0;
- (void)onChatLogDataLoadFinished;
- (void)onLoadingCurrentSession:(unsigned long long)a0 totalSessionCount:(unsigned long long)a1;
- (void)onMigrationServerGetQRCodeImg:(id)a0;
- (void)onMigrationServerNotifyCode:(unsigned long long)a0;
- (void)onMigrationServerAlertCode:(unsigned long long)a0;
- (void)onMigrationServerCloseEntryView;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
