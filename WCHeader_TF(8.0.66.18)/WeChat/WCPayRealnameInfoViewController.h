@class WCPayTenpaySecureCtrlItem, NSString, NSIndexPath, WCBizInfoGroup, WCPayAreaItem, WCPayRealnameInfoViewV2, WCBaseTextFieldItem, WCPayGetProfessionItem, RichTextView, UIButton, WCBaseKeyboardToolBar;
@protocol WCPayRealnameInfoViewControllerDelegate;

@interface WCPayRealnameInfoViewController : WCPayBaseViewController <WCPayRealnameInfoViewV2Delegate, WCPayAreaItemDelegate, WCPayGetProfessionItemDelegate, ILinkEventExt, WCBaseInfoItemDelegate> {
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCPayTenpaySecureCtrlItem *m_textFieldHolderIDItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSIndexPath *m_selectItemIndex;
    id<WCPayRealnameInfoViewControllerDelegate> m_delegate;
    WCBizInfoGroup *group;
}

@property (retain, nonatomic) UIButton *m_readAgreementButton;
@property (retain, nonatomic) RichTextView *m_readAgreementTextView;
@property (retain, nonatomic) WCPayAreaItem *areaItem;
@property (retain, nonatomic) WCPayGetProfessionItem *professionItem;
@property (nonatomic) double m_minItemLeft;
@property (retain) WCPayRealnameInfoViewV2 *realNameViewV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewDidLoad;
- (void)adjustBottomTips;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)onReadAgreementClick:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (BOOL)shouldInteractivePop;
- (void)clickInfoCell:(id)a0 index:(id)a1;
- (void)FillRealnameCancel:(id)a0;
- (void)onNext;
- (BOOL)getData:(id)a0;
- (void)WCBaseInfoItemPressReturnKey:(id)a0;
- (void)WCBaseInfoItemCancelEdit:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (BOOL)checkIsEmpty:(id)a0;
- (void)setDelegate:(id)a0;
- (void)onWCPayAreaItemDidChoseRegion:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onWCPayRealnameInfoViewV2ClickConfirm:(id)a0;
- (id)onWCPayRealnameInfoViewV2CurrentViewController;
- (id)onWCPayRealnameInfoViewV2TableViewInfo;
- (void).cxx_destruct;

@end
