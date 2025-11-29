@class WCPayTenpaySecureCtrlItem, NSString, WCBizTipView, WCBaseControlLogic, WCBizInfoGroup, WCBaseTextFieldItem, UIButton, RichTextView, UILabel;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayFillCardNumberViewController : WCPayBaseViewController <WCPayCardNumberScanDelegate, MMWebViewDelegate, ILinkEventExt, WCBizTipViewDelegate> {
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id<WCPayFillCardNumberViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    BOOL m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
    RichTextView *realnameRichTextView;
    UIButton *_scanButton;
}

@property (readonly, nonatomic) BOOL m_bAutoFilledCardNumber;
@property (retain, nonatomic) WCBaseControlLogic *fromControlLogic;
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
- (void)viewDidBePoped:(BOOL)a0;
- (void)FillCardNumberCancel;
- (void)initNavigationBar;
- (id)getFirstUserTipView;
- (void)reloadTableView;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)scanAction:(id)a0;
- (void)onNext;
- (void)OnClearAutoFilledCardNumber;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showDetailTip;
- (void)OnWCBizTipViewClosed;
- (void)setAutoFilledCardNumber;
- (void)didFindCardNumber:(id)a0 cardImage:(id)a1 scanResult:(id)a2;
- (unsigned int)onWCPayCardNumberScanViewControllerSource;
- (void)footerTipAction:(id)a0;
- (void)changeRealName;
- (void)webViewReturn:(id)a0;
- (unsigned int)regFlag;
- (void).cxx_destruct;

@end
