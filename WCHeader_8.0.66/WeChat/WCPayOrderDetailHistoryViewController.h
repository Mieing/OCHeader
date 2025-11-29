@class NSString;
@protocol WCPayOrderDetailHistoryViewControllerDelegate;

@interface WCPayOrderDetailHistoryViewController : WCPayBaseViewController <WCPayHistoryOrderDetailViewDelegate> {
    id<WCPayOrderDetailHistoryViewControllerDelegate> m_delegate;
    BOOL m_bShowCompleteBtn;
    BOOL m_bShowSuccessTip;
    BOOL m_bSelectedSuscribeServiceApp;
    BOOL m_bShowAppFrom;
    BOOL m_bHandlePoped;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    int m_enWCPayHistoryOrderDetailViewScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setDelegate:(id)a0;
- (void)BackHistoryOrderDetail;
- (void)viewDidBePoped:(BOOL)a0;
- (void)OnHistoryOrderDetailBack;
- (void)OnNextStepBack;
- (void)initNavigationBar;
- (void)selectSubscribeApp:(id)a0;
- (void)OnSubscribeApp;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setCompleteBtnTitle:(id)a0;
- (void)showCompleteBtn:(BOOL)a0;
- (void)showSuccessPayTip:(BOOL)a0;
- (void)showOrderFromApp:(BOOL)a0;
- (void)showBizSafeTitle:(BOOL)a0;
- (void)setWCPayOrderDetailHistoryViewScene:(int)a0;
- (void)OnClickedBrandProfile:(id)a0 NickName:(id)a1;
- (void)OnClickedRetrySendMessage:(id)a0 UserName:(id)a1;
- (void)OnClickedReceiverProfile:(id)a0;
- (void).cxx_destruct;

@end
