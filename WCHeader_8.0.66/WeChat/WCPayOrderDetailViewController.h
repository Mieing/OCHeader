@class WCPayBindedCardPikerItem, NSString, WCBaseKeyboardToolBar, NSIndexPath, MMUILabel, WCPayTenpayPasswordCtrlItem, UIButton;
@protocol WCPayOrderDetailViewControllerDelegate;

@interface WCPayOrderDetailViewController : WCPayBaseViewController <WCPayBindedCardPikerItemDelegate, WCPayOrderDetailViewDelegate, ILinkEventExt> {
    UIButton *m_footerButton;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpayPasswordCtrlItem *m_textFieldItemPwd;
    WCPayBindedCardPikerItem *m_cardTypeItem;
    id<WCPayOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsError;
    NSIndexPath *m_selectItemIndex;
    BOOL bSelectedBalance;
    BOOL bUserSelected;
    MMUILabel *detailEnsureLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadBindTableView;
- (void)reloadPayTableView;
- (void)OnComfireEnsureAlert;
- (void)OnCancel;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)isNeedAutoNext;
- (BOOL)isNoCardOrBalanceDisable;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemCancelEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)makeBalanceInfoCell:(id)a0 cellInfo:(id)a1;
- (void)makeNewCardInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0 index:(id)a1;
- (void)OnAddPayCard;
- (void)OnAddCardToSharedFavInfo;
- (void)onNext;
- (void)OnChooseNewCard:(id)a0;
- (void)OnChooseCard:(id)a0;
- (void)OnSelectedBalance;
- (void)OnSelectedNewCard;
- (void)setDelegate:(id)a0;
- (void)OnWCPayOrderDetailViewHeightChange:(id)a0;
- (void)OnWCPayOrderDetailViewClickedCoupous;
- (void)clearPwdInput;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)calBalanceCellHeightWithForbidWord;
- (void)callDelegatePay;
- (void).cxx_destruct;

@end
