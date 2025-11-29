@class UILabel, NSString, WCPayCountryCodeItem, WCPayCVVItem, WCBizTipView, UIButton, WCBizInfoGroup, WCPayPhoneTextItem, WCPayCountryCodeAndPhoneNumberItem, WCBaseTextFieldItem, RichTextView, WCPayValidDateItem;
@protocol WCPayResetBalanceTelephoneViewControllerDelegate;

@interface WCPayResetBalanceTelephoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt, WCBizTipViewDelegate> {
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayPhoneTextItem *m_textFieldItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCPayCVVItem *m_textFieldCVVItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id<WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    BOOL m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
}

@property (retain, nonatomic) WCPayCountryCodeItem *countryCodeItem;
@property (retain, nonatomic) WCPayCountryCodeAndPhoneNumberItem *countryCodeAndPhoneItem;
@property (readonly, nonatomic) BOOL m_bAutoFilledCardNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setHeaderTip:(id)a0;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)initFooterView;
- (void)setShowedFavorInfo;
- (void)FillCardNumberCancel;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)scanAction:(id)a0;
- (void)onNext;
- (void)CheckData;
- (void)OnClearAutoFilledCardNumber;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onPhoneClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showDetailTip;
- (void)OnWCBizTipViewClosed;
- (void)setAutoFilledCardNumber;
- (void)footerTipAction:(id)a0;
- (BOOL)isSupportForeignPhoneNum;
- (void)countryCodeItem:(id)a0 didSelectCountryCode:(id)a1;
- (void)countryCodeItem:(id)a0 isCountryCodeValid:(BOOL)a1;
- (void)countryCodeAndPhoneNumberItem:(id)a0 countryCodeDidChange:(id)a1;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)a0;
- (void).cxx_destruct;

@end
