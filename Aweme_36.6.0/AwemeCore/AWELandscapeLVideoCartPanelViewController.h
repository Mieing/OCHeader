@class AWELandscapePageContext, UILabel, UIView, UIButton;
@protocol AWELongVideoLVWidgetContainerProtocol, AWELandscapeLVideoCartPanelViewControllerDelegate;

@interface AWELandscapeLVideoCartPanelViewController : UIViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView<AWELongVideoLVWidgetContainerProtocol> *hunterView;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (copy, nonatomic) id /* block */ closeAction;
@property (weak, nonatomic) id<AWELandscapeLVideoCartPanelViewControllerDelegate> delegate;

- (void)showPanel;
- (void)bdx_closeWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)bdx_shouldUseCustomClose;
- (void)dismissPanelWithCompletion:(id /* block */)a0;
- (void)updateWithPageContext:(id)a0 entrance:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)closeButtonTapped;
- (double)panelWidth;

@end
