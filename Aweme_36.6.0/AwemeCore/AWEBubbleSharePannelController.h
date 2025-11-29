@class UIViewController, NSString, AWESharePanelViewModel, UILabel, UIView, UIButton;
@protocol AWEShareRowViewProtocol, AWEShareCollectionViewProtocol, AWEPadBubbleViewProtocol;

@interface AWEBubbleSharePannelController : AWEShareBasePanelController <AWEShareCollectionViewHostView, AWEShareRowViewDelegate, AWESharePanel>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEShareRowViewProtocol, AWEShareCollectionViewProtocol> *firstRowView;
@property (retain, nonatomic) UIView<AWEShareRowViewProtocol, AWEShareCollectionViewProtocol> *secondRowView;
@property (nonatomic) BOOL viewHasAppeared;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct CGPoint { double x; double y; } buttonPositon;
@property (nonatomic) struct CGSize { double width; double height; } shareButtionSize;
@property (retain, nonatomic) UIView<AWEPadBubbleViewProtocol> *containerView;
@property (weak, nonatomic) UIViewController *presenterVC;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) unsigned long long styleOptions;
@property (retain, nonatomic) AWESharePanelViewModel *viewModel;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (weak, nonatomic) UIButton *shareButton;

+ (Class)aAWEPadModuleAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (id)fromGroupID;
- (id)itemWithType:(id)a0;
- (void)showWithAnimation;
- (BOOL)reloadCellForItemWithType:(id)a0;
- (BOOL)scrollToCellForItemWithType:(id)a0;
- (BOOL)isCellVisibleForItemWithType:(id)a0;
- (id)cellForItemWithType:(id)a0;
- (void)caculateShareButtonPositon;
- (void)playAppearanceAnimation;
- (void)handleTapMaskView:(id)a0;
- (void)dissmissWithAnimationCompletion:(id /* block */)a0;
- (void)shareRowViewDidSelect:(id)a0;
- (id)initWithTask:(id)a0 shareButton:(id)a1 presenterVC:(id)a2;
- (id)initWithShareButton:(id)a0 presenterVC:(id)a1;
- (BOOL)dismissesAutomatically;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (double)bottomMargin;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)closeButtonTapped:(id)a0;
- (double)containerWidth;

@end
