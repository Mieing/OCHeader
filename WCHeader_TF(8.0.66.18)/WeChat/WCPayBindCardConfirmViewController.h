@class NSString;
@protocol WCPayBindCardConfirmViewControllerDelegate;

@interface WCPayBindCardConfirmViewController : WCPayBaseViewController <WCPayBindCardConfirmViewDelegate>

@property (weak) id<WCPayBindCardConfirmViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePresented:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)onBack;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)onWCPayBindCardConfirmViewConfirm:(BOOL)a0;
- (void).cxx_destruct;

@end
