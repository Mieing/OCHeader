@class NSString, UIButton;
@protocol WCPayCreditPayCardDetailInfoViewControllerDelegate;

@interface WCPayCreditPayCardDetailInfoViewController : WCPayBaseViewController <WCActionSheetDelegate> {
    id<WCPayCreditPayCardDetailInfoViewControllerDelegate> m_delegate;
    UIButton *m_footerButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)makeCreditCanUseCell:(id)a0;
- (void)makeExtCell:(id)a0 cellInfo:(id)a1;
- (void)onClickExtCell:(id)a0;
- (void)makeCreditUsedCell:(id)a0;
- (void)showUpgradeCell;
- (void)showBillAmountCell;
- (void)showRepayCell;
- (void)showCreditCardDetailInfoCell;
- (void)showCreditRightsCell;
- (void)showBankDetailCell;
- (id)getBillTipWording;
- (void)addEachSection;
- (id)getTableViewHeaderView;
- (id)getContactBankFooterView;
- (void)addExpiredSection;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)a0;
- (void)reloadNavigationBar;
- (void)onOperate;
- (void)onUnBind;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
