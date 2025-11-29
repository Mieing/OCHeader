@class UIScrollView, NSString, UINavigationItem, UIView, MMProgressView, UIImageView, MMUINavigationBar, UIButton, UIImage, UILabel, MMUIActivityIndicatorView;
@protocol WXGPureOfflineMigrationServerViewControllerDelegate;

@interface WXGPureOfflineMigrationServerViewController : MMUIViewController <WXGChatLogSessionViewControllerDelegate, IChatLogDataMgrExt> {
    UIImageView *_imgView;
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UIView *_tempViewContainer;
    MMProgressView *_progressView;
    UIButton *_greenBtn;
    UIButton *_greyBtn;
    UIButton *_linkBtn;
    UIImage *_qrcodeImage;
    BOOL _isViewSetup;
    BOOL _isVisible;
    BOOL _needRelayout;
    unsigned long long _notifyCode;
    long long _chatLogSize;
    BOOL _bIsRegistedExtension;
    BOOL _bStartAllClicked;
    NSString *_progressStr;
    float _progress;
}

@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<WXGPureOfflineMigrationServerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUIComponent;
- (void)updateNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)updateMainContentView;
- (void)updateTempView;
- (id)getConnectRemindView:(double)a0;
- (void)updateView;
- (void)onNotifyCodeChange:(unsigned long long)a0;
- (void)onTransferProgressChange:(float)a0 leftTime:(unsigned int)a1 sizeProgress:(float)a2;
- (void)doCancel;
- (void)onPressCancelBtn;
- (void)onConfirmNextStepBtn;
- (void)onStartWithAllBtn;
- (void)onStartWithSpecificBtn;
- (void)onMigrationAllRange;
- (void)onMigrationNewRange;
- (void)onChatLogSession:(id)a0 selectSession:(id)a1 selectAllTime:(BOOL)a2 selectAllSession:(BOOL)a3 selectTextOnly:(BOOL)a4 minTime:(id)a5 selectStartTime:(id)a6 selectEndTime:(id)a7;
- (void)onCancelSelectSession;
- (void)makeQrcodeState;
- (void)onGetQrcodeComplete:(BOOL)a0;
- (void)onGetQrcodeDone:(id)a0;
- (void)onChatLogDataLoadFinished;
- (void)doIfBatteryEnoughOrConfirm:(id /* block */)a0;
- (double)getSafeBottomInset;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (void).cxx_destruct;

@end
