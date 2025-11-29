@class NSString, AWEProfileMenuHorizontalHeader, UIView, UIPanGestureRecognizer, AWEAccessibilityMaskView;

@interface AWEProfileMoreMenuViewController : AWEBaseListViewController <UIGestureRecognizerDelegate, AWEProfileMoreMenuProtocol>

@property (retain, nonatomic) AWEAccessibilityMaskView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) AWEProfileMenuHorizontalHeader *headerView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)aAWEPadModuleAdapter;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)__setupUI;
- (void)configWithProtocolContext:(id)a0;
- (void)configWithContext:(id)a0;
- (void)handlePanGes:(id)a0;
- (double)__menuHeight;
- (void)__tappedDismiss;
- (void)__slideDismiss;
- (double)__menuBottomHeight;
- (double)__menuBottomHeightWithoutFooter;
- (double)__contentBottomInset;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismiss:(id /* block */)a0;
- (void)setupCollectionView:(id)a0;

@end
