@class NSString, WCBaseKeyboardToolBar, WCBizInfoGroup, WCBaseTextFieldItem, WCPayCredTypeItem, WCPayTenpaySecureCtrlItem, UIButton;
@protocol WCPayFillCredInfoViewControllerDelegate;

@interface WCPayFillCredInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>

@property (weak, nonatomic) id<WCPayFillCredInfoViewControllerDelegate> delegate;
@property (nonatomic) double minItemLeft;
@property (retain, nonatomic) WCBizInfoGroup *infoGroup;
@property (retain, nonatomic) WCBaseKeyboardToolBar *keyboardBar;
@property (retain, nonatomic) WCBaseTextFieldItem *textFieldNameItem;
@property (retain, nonatomic) WCPayCredTypeItem *pickerCredTypeItem;
@property (retain, nonatomic) WCPayTenpaySecureCtrlItem *textFieldHolderIDItem;
@property (retain, nonatomic) UIButton *footerBtn;
@property (retain, nonatomic) UIButton *faqBtn;
@property (nonatomic) double footerBtnOldY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)viewDidBePoped:(BOOL)a0;
- (void)leftBarButtonItemClick;
- (void)setupContentView;
- (void)setupInfoTemplate;
- (void)setupTableView;
- (id)setupTableHeaderView;
- (id)setupTableFooterView;
- (void)checkFooterBtnStatus;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0;
- (void)footerBtnClick;
- (void)faqBtnClick;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void)onKeyboardFrameManulChange:(id)a0;
- (void).cxx_destruct;

@end
