@class WCActionSheet, NSString, UIView, UIButton;
@protocol WCPayCardDetailViewControllerDelegate;

@interface WCPayCardDetailViewController : WCPayBaseViewController <WCActionSheetDelegate, MMPatternLockLogicDelegate> {
    UIButton *m_footerButton;
    WCActionSheet *m_actionSheet;
    id<WCPayCardDetailViewControllerDelegate> m_delegate;
    UIView *m_overseasCardView;
    UIView *tenpayTelView;
    unsigned int _patternLockLogicTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)refreshViewWithData:(id)a0;
- (void)onBankPhone;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (void)initTenpayTelView;
- (void)viewDidLoad;
- (void)initOverseasCardDetailView;
- (void)onOperate;
- (void)CardDetailExpireUnbindCard;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showRepayCell;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)onAlertViewPatternLockSetup;
- (void)onAlertViewUnbindBtn;
- (void)onAlertViewStartUnbind;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)startUnbind;
- (void).cxx_destruct;

@end
