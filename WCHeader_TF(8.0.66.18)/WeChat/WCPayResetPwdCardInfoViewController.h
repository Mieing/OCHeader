@class WCPayCardTypeItem, WCPayValidDateItem, WCPayAreaItem, WCPaySelectDateItem, WCBaseTextFieldItem, NSMutableArray, UIButton, WCPayTenpaySecureCtrlItem, NSString, WCPayCVVItem, WCPayCredTypeItem, WCPayCountryCodeItem, WCBaseKeyboardToolBar, WCPaySelectCountItem, WCPayCountryCodeAndPhoneNumberItem;
@protocol WCPayResetPwdCardInfoViewControllerDelegate;

@interface WCPayResetPwdCardInfoViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, WCBaseInfoItemDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayAreaItemDelegate> {
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCPayTenpaySecureCtrlItem *m_textFieldCardNumItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCPayCardTypeItem *m_pikerCardTypeItem;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayCredTypeItem *m_pickerCredTypeItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    id<WCPayResetPwdCardInfoViewControllerDelegate> m_delegate;
    BOOL m_bReadAgreement;
    WCBaseTextFieldItem *m_textFieldFirstNameItem;
    WCBaseTextFieldItem *m_textFieldLastNameItem;
    WCPayAreaItem *m_textFieldAreaItem;
    WCBaseTextFieldItem *m_textFieldAddressItem;
    WCBaseTextFieldItem *m_textFieldPhoneNumberItem;
    WCBaseTextFieldItem *m_textFieldZipItem;
    WCBaseTextFieldItem *m_textFieldEmailItem;
    WCPaySelectDateItem *m_pickerCredValidDateItem;
    WCPaySelectCountItem *m_pickerSelectCountItem;
    WCPaySelectDateItem *m_pickerBirthDayItem;
}

@property (nonatomic) double m_minItemLeft;
@property (retain, nonatomic) WCPayCountryCodeItem *countryCodeItem;
@property (retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem;
@property (retain, nonatomic) WCBaseTextFieldItem *realNameTextItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initInfoTemplate;
- (long long)nowYear;
- (void)reloadTableView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (BOOL)getData:(id)a0;
- (void)onNext;
- (void)onReadAgreement:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)checkIsEmpty:(id)a0;
- (void)checkData:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0;
- (void)showDetailTip;
- (void)setDelegate:(id)a0;
- (void)onWCPayAreaItemDidChoseRegion:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (BOOL)isSupportForeignPhoneNum;
- (void)countryCodeItem:(id)a0 didSelectCountryCode:(id)a1;
- (void)countryCodeItem:(id)a0 isCountryCodeValid:(BOOL)a1;
- (void)countryCodeAndPhoneNumberItem:(id)a0 countryCodeDidChange:(id)a1;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)a0;
- (void).cxx_destruct;

@end
