@class WCPayOrderDetail, WCPayEntrustPayInfo, UISwitch, NSString, RichTextView;
@protocol WCPayAutoDeductSettingViewControllerDelegate;

@interface WCPayAutoDeductSettingViewController : WCPayBaseViewController <ILinkEventExt> {
    id<WCPayAutoDeductSettingViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) UISwitch *switchButton;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) WCPayOrderDetail *order;
@property (retain, nonatomic) WCPayEntrustPayInfo *entrustPayInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)makeHeaderContent;
- (void)makeInfoSectionContentView:(id)a0;
- (id)footerView;
- (void)setupBottomTextView;
- (id)getShowInfoView:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setupData;
- (void)OnCancel;
- (void)changeSwitch:(id)a0;
- (void)OnFooterButtonClick:(id)a0;
- (BOOL)isCNY;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
