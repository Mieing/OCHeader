@class UIButton, AWELandscapeLVideoCartPanelViewController, NSString;

@interface AWELandscapeShoppingCartElement : AWELandscapeInteractionBaseElement <AWELandscapeLVideoCartPanelViewControllerDelegate>

@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) AWELandscapeLVideoCartPanelViewController *lVideoCartPanel;
@property (nonatomic) BOOL isShowingCartPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideAllPanels;
- (void)bdx_closeWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)bdx_shouldUseCustomClose;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)showCartPanelWithEntrance:(id)a0;
- (void)traceCartButtonShow;
- (void)hideLongVideoCartPanelWithCompletion:(id /* block */)a0;
- (void)traceCartButtonClicked;
- (void)handleClickCart;
- (BOOL)isShowingPanel;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
