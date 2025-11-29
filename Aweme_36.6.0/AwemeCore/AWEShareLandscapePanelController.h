@class UIView, NSNumber, AWEShareGridView, NSString, UIButton, AWEPanelTransitionController, CAGradientLayer, AWESharePanelViewModel, UILabel, UIScrollView;

@interface AWEShareLandscapePanelController : AWEShareBasePanelController <AWEShareCollectionViewHostView, AWEPanelTransitionWithBackground, AWESharePanel>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEShareGridView *firstGridView;
@property (retain, nonatomic) AWEShareGridView *secondGridView;
@property (retain, nonatomic) UIView *centeringContentView;
@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long styleOptions;
@property (retain, nonatomic) AWESharePanelViewModel *viewModel;
@property (retain, nonatomic) NSNumber *bypassPresentHook;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;

- (BOOL)wantsDimmingTransitionBackground;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)fromGroupID;
- (id)itemWithType:(id)a0;
- (void)reloadUI;
- (BOOL)reloadCellForItemWithType:(id)a0;
- (BOOL)scrollToCellForItemWithType:(id)a0;
- (BOOL)isCellVisibleForItemWithType:(id)a0;
- (BOOL)dismissesAutomatically;
- (id)contentVisualEffect;
- (void)setupWithImPanel;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
