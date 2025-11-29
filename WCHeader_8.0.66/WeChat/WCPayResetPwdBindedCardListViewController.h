@class MMTipsViewController, NSString, WCPayBindCardInfo, RichTextView, NSMutableArray, UIButton;
@protocol WCPayResetPwdBindedCardListViewControllerDelegate;

@interface WCPayResetPwdBindedCardListViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, ILinkEventExt> {
    UIButton *m_footerButton;
    NSMutableArray *m_cellInfoArray;
    WCPayBindCardInfo *selectedPayCardInfo;
    id<WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate;
    BOOL bSelectedNewCardToResetPwd;
    RichTextView *richTextView;
    BOOL bPoped;
}

@property (retain, nonatomic) UIButton *qaButton;
@property (retain, nonatomic) MMTipsViewController *errorTipsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)checkBankAvailable:(id)a0;
- (BOOL)checkBankCanShow:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)OnResetPwdBindedCardListBack;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadCardListView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setDelegate:(id)a0;
- (void)OnSelectCard:(id)a0;
- (void)OnSelectInvalidCard:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)OnSelectNewCard;
- (void)onNext;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onQAButtonClick;
- (void).cxx_destruct;

@end
