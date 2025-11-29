@class WCPayPhoneTextItem, WCPayTenpaySecureCtrlItem, NSString, UIButton;
@protocol WCPayECardFillCardInfoViewControllerDelegate;

@interface WCPayECardFillCardInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>

@property (retain, nonatomic) WCPayTenpaySecureCtrlItem *bankCardNumberTextFieldItem;
@property (retain, nonatomic) WCPayPhoneTextItem *phoneNumberTextFieldItem;
@property (retain, nonatomic) UIButton *footerButton;
@property (nonatomic) double cellItemLeft;
@property (weak, nonatomic) id<WCPayECardFillCardInfoViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)calculateCellItemLeft;
- (id)makeCellTitleLabel;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (id)tableFooterView;
- (void)showDetailTip;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void).cxx_destruct;

@end
