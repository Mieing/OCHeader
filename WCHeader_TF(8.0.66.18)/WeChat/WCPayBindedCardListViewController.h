@class NSString, BalanceMobileInfo, UIView, WCPayBindCardInfo;
@protocol WCPayBindedCardListViewControllerDelegate;

@interface WCPayBindedCardListViewController : WCPayBaseViewController <ILinkEventExt> {
    WCPayBindCardInfo *selectedPayCardInfo;
    id<WCPayBindedCardListViewControllerDelegate> m_delegate;
    BOOL bSelectedNewCardToResetPwd;
    BOOL bViewDidBePoped;
    NSString *nsUsedNewCardWording;
    NSString *nsHeaderTips;
    UIView *tenpayTelView;
}

@property (retain, nonatomic) BalanceMobileInfo *selectedMobileInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)getMobileInfos;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadCardListView;
- (void)makeMobileCell:(id)a0 cellInfo:(id)a1;
- (BOOL)noResetMobileForDigitalCert;
- (void)setDelegate:(id)a0;
- (void)setNewCardControlWording:(id)a0;
- (void)setTitle:(id)a0;
- (void)setHeaderTips:(id)a0;
- (void)initKFTelView;
- (void)leftBarButtonDone;
- (void)OnSelectMoblieInfo:(id)a0;
- (void)OnSelectNewCard;
- (void)onUpdateBankPhoneNumber;
- (void)onBankPhone;
- (void)verifyByCardNumber;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (id)checkBankAvailable:(id)a0;
- (BOOL)isMobileInfoAvailble:(id)a0;
- (BOOL)checkBankCanShow:(id)a0;
- (id)getSelectedMobileInfo:(id)a0;
- (id)getCardInfoWith:(id)a0;
- (void).cxx_destruct;

@end
