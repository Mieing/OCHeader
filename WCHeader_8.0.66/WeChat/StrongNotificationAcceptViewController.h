@class UIView, NSString, UIImageView, UIButton, WeToast, MMUILabel, UILabel, MMUIButton;

@interface StrongNotificationAcceptViewController : MMWindowViewController <IStrongNotificationMgrExt> {
    UIImageView *m_logoView;
    MMUILabel *m_titleView;
    UILabel *m_contentView;
    UIButton *m_iAcceptBtn;
    UIButton *m_iCancelBtn;
    WeToast *toastVC;
    MMUIButton *m_iCloseBtn;
    UIView *m_backgroundView;
}

@property (retain, nonatomic) NSString *m_strongNotificationContent;
@property (retain, nonatomic) NSString *m_strongNotificationQRCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)layoutView;
- (void)layoutBackgroundView;
- (void)layoutCloseButton;
- (void)layoutHeadView;
- (void)layoutICancelBtn;
- (void)layoutIAcceptBtn;
- (void)doIAccept;
- (void)onCancelBtnClicked:(id)a0;
- (void)onAcceptWeAppStrongNotification:(id)a0 resultFlag:(BOOL)a1 errorMsg:(id)a2;
- (void).cxx_destruct;

@end
