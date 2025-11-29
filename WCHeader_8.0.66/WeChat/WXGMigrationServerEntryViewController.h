@class MMUILabel, NSString, UIImageView, MMUIActivityIndicatorView, UIView, WXGDotDotDotLabel, UIButton;
@protocol WXGMigrationServerEntryViewControllerDelegate;

@interface WXGMigrationServerEntryViewController : MMWindowViewController <IChatMigrationServerExt, CNetworkStatusExt> {
    UIView *m_backgroundView;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    MMUIActivityIndicatorView *m_QRCLoadingView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    UIButton *m_greenButton;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_speedString;
    int m_retryGetQRCodeTimes;
}

@property (weak, nonatomic) id<WXGMigrationServerEntryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)p_setupView;
- (void)p_addBlurEffectForView;
- (void)p_addLeftCornerButton;
- (void)p_addIconImageView;
- (void)p_resetIconImageViewWithImage:(id)a0;
- (void)p_addTipsLabel;
- (void)p_addSmallTipsLabel;
- (void)p_addGreenButton;
- (void)onMigrationServerNotifyCode:(unsigned long long)a0;
- (void)onMigrationServerAlertCode:(unsigned long long)a0;
- (void)onMigrationCurrentSession:(unsigned long long)a0 totalSession:(unsigned long long)a1;
- (void)onMigrationServerTransferSpeed:(float)a0;
- (void)onMigrationServerGetQRCodeImg:(id)a0;
- (void)onMinimizeView;
- (void)onCloseView;
- (void)onAlertCancelTimeSelect;
- (void)onAlertCancelQuickMigration;
- (void)onAlertCancelQuickMigrationAndTimeSelect;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)p_refreshQRCode;
- (void).cxx_destruct;

@end
