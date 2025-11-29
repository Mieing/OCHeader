@class UIView, NSString, BrandCustomSharePanelLayout, NSArray, WCBrandOverFullscreenAnimator, UIControl, WXMASConstraint, UICollectionView, UIPercentDrivenInteractiveTransition;
@protocol BrandCustomSharePanelViewControllerDelegate;

@interface BrandCustomSharePanelViewController : UIViewController <WCBrandOverFullscreenAnimatable, UICollectionViewDelegate, UICollectionViewDataSource, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *panelDragger;
@property (retain, nonatomic) UIView *panelDraggerHandle;
@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) WXMASConstraint *topConstraint;
@property (retain, nonatomic) WXMASConstraint *bottomConstraint;
@property (retain, nonatomic) WCBrandOverFullscreenAnimator *customAnimator;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (nonatomic) BOOL isInteractiveTransition;
@property (retain, nonatomic) UICollectionView *contentView;
@property (retain, nonatomic) BrandCustomSharePanelLayout *layout;
@property (copy, nonatomic) NSArray *actionGroups;
@property (nonatomic) BOOL closeByCancelled;
@property (weak, nonatomic) id<BrandCustomSharePanelViewControllerDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateActionGroups:(id)a0;
- (void)viewDidLoad;
- (void)viewIsAppearing:(BOOL)a0;
- (void)setupUI;
- (void)setupDragger;
- (void)onDraggerPanGesture:(id)a0;
- (void)setupContentView;
- (void)setupAction;
- (void)didClickMask;
- (void)closePanelWithCompletion:(id /* block */)a0;
- (void)closePanelByCancelled;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)playOverFullscreenDismissAnimation;
- (void)playOverFullscreenPresentAnimation;
- (void)onDismissAnimiationCancelled;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void).cxx_destruct;

@end
