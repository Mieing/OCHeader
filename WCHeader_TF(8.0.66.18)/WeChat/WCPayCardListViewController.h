@class NSString, NSDictionary, NSMutableArray, UIButton;
@protocol WCPayCardListViewControllerDelegate;

@interface WCPayCardListViewController : WCPayBaseViewController <WCPayNoticeBannerDelegate, HoneyPayReceiverCardViewDelegate, HoneyPayReceiverCardDetailControlLogicDelegate, WCActionSheetDelegate, WCPayCardDetailViewDelegate, MMUseCaseCallback, WCPayLogicMgrExt, ILinkEventExt, MMWebViewDelegate> {
    NSMutableArray *m_arrPayCardDetailView;
    unsigned int totalHeight;
    NSDictionary *m_dicBanners;
    UIButton *m_applyCardButton;
}

@property (weak, nonatomic) id<WCPayCardListViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onLeftBarButtonDone;
- (void)viewDidLoad;
- (void)reloadNavigationItem;
- (void)rightBarButtonClick;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)makeBaseExtentionCell:(id)a0;
- (void)makeWXBorrowMoneyItemCell:(id)a0 cellInfo:(id)a1;
- (void)makeVirtualCardCell:(id)a0 cellInfo:(id)a1;
- (void)makeAddCardCell:(id)a0;
- (id)makeAddNewCardView;
- (void)makeApplyNewCardCell:(id)a0;
- (void)makeLoanMoneyCell:(id)a0;
- (void)willShowAddCard;
- (void)didShowAddCard;
- (void)didShowApplyNewCard;
- (void)openTinyAppWithUsername:(id)a0 path:(id)a1 fromScene:(unsigned long long)a2;
- (void)refreshViewWithData:(id)a0;
- (void)onClickVirtualCard:(id)a0;
- (void)onClickVirtualCardAndChecking:(id)a0;
- (void)onClickWXBorrowMoneyItem:(id)a0;
- (void)onClickWXBorrowMoneyItemView:(id)a0;
- (void)onClickBalanceView:(id)a0;
- (void)onClickCard:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)gotoLoanMoney;
- (void)webViewReturn:(id)a0;
- (void)onQAButtonClick;
- (void)banner:(id)a0 clickWithUrl:(id)a1;
- (id)getNoticeBanner;
- (void)honeyPayCardViewDidBeClicked:(id)a0;
- (void)call:(id)a0;
- (void)honeyPayReceiverCardDetailLogicDidUnbindCard:(id)a0;
- (void)OnResetPasswordCancel:(id)a0;
- (void).cxx_destruct;

@end
