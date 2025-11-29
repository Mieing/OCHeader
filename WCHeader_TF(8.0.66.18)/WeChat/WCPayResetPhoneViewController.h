@class UIButton, NSString, WCBizInfoGroup, WCPayPhoneTextItem, WCBaseKeyboardToolBar, WCPayCountryCodeItem, WCPayCountryCodeAndPhoneNumberItem;
@protocol WCPayResetPhoneViewViewControllerDelegate;

@interface WCPayResetPhoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt> {
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id<WCPayResetPhoneViewViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) WCPayCountryCodeItem *countryCodeItem;
@property (retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onNext;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)showDetailTip;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)onPhoneClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)checkData;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (BOOL)isSupportForeignPhoneNum;
- (void)countryCodeItem:(id)a0 didSelectCountryCode:(id)a1;
- (void)countryCodeItem:(id)a0 isCountryCodeValid:(BOOL)a1;
- (void)countryCodeAndPhoneNumberItem:(id)a0 countryCodeDidChange:(id)a1;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)a0;
- (void).cxx_destruct;

@end
