@class UIView, NSString, UIImageView, OnlineInfo, UIImage, UILabel, UIButton;
@protocol OnlineDeviceInfoViewControllerDelegate;

@interface OnlineDeviceInfoViewController : MMWindowViewController <WCActionSheetDelegate, IOnlineClientMgrExt> {
    UIImage *_deviceImg;
    UIImageView *_deviceView;
    UIButton *_logoutBtn;
    UILabel *_tipsLabel;
    UILabel *_subLabel;
    UILabel *_descriptionLabel;
    UIButton *_cancelBtn;
    UIButton *_helpBtn;
    BOOL _isManualOpen;
    UIView *m_backgroundView;
    NSString *deviceNameTmp;
}

@property (weak, nonatomic) id<OnlineDeviceInfoViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long supportedOrientations;
@property (retain, nonatomic) OnlineInfo *onlineClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithIsManualOpen:(BOOL)a0;
- (void)unlockForMac:(id)a0 isWindowExist:(BOOL)a1;
- (void)onUnlockMac;
- (void)setIsloading:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)addBlurEffectForView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCancelBtn;
- (void)onHelp;
- (void)onCancelBtnClicked;
- (void)onCancel;
- (id)getDeviceImgWithIsMuted:(BOOL)a0;
- (void)setupInfoView;
- (void)handleLockStatusChangesWithOnlineStatus;
- (void)onTopBarFrameChanged;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onOnlineInfoUpdated;
- (void).cxx_destruct;

@end
